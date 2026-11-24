
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Pins
#define TRIG_PIN 26
#define ECHO_PIN 18
#define FLAME_PIN 27
#define VIBRATION_PIN 25

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(
  SCREEN_WIDTH,
  SCREEN_HEIGHT,
  &Wire,
  -1
);

// Variables
int flameState;
long duration;
float distance;

volatile bool vibrationEvent = false;

unsigned long lastVibrationTime = 0;

void vibrationISR()
{
  vibrationEvent = true;
}

void setup()
{
  Serial.begin(115200);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(FLAME_PIN, INPUT);
  pinMode(VIBRATION_PIN, INPUT);

  // Detect any change in SW-420
  attachInterrupt(
    digitalPinToInterrupt(VIBRATION_PIN),
    vibrationISR,
    CHANGE
  );

  Wire.begin(21, 22);

  if (!display.begin(
        SSD1306_SWITCHCAPVCC,
        0x3C))
  {
    Serial.println("OLED error!");
    while (1);
  }

  display.clearDisplay();
  display.display();
}

void loop()
{
  // 1. Read flame sensor
  flameState = digitalRead(FLAME_PIN);

  // 2. Check vibration event
  if (vibrationEvent)
  {
    vibrationEvent = false;
    lastVibrationTime = millis();
  }

  bool vibrationAlert =
    (millis() - lastVibrationTime < 1000) &&
    (lastVibrationTime != 0);

  // 3. Read ultrasonic sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH, 30000);

  if (duration == 0)
  {
    distance = -1;
  }
  else
  {
    distance = duration * 0.0343 / 2.0;
  }

  // 4. OLED display
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);

  display.setTextSize(1);
  display.setCursor(15, 5);
  display.println("FIRE & VIBRATION");

  display.drawLine(0, 18, 127, 18, SSD1306_WHITE);

  display.setTextSize(2);
  display.setCursor(5, 25);

  // Higher priority: Fire detection
  if (flameState == LOW &&
      distance >= 0 &&
      distance <= 60.96)
  {
    display.println("FIRE");
    display.setCursor(5, 43);
    display.println("DETECTED!");
  }

  // Second priority: Vibration detection
  else if (vibrationAlert)
  {
    display.println("VIBRATION!");
  }

  // Flame detected but outside 24 inches
  else if (flameState == LOW)
  {
    display.println("FLAME!");
  }

  // No detection
  else
  {
    display.println("MONITORING");
  }

  // 5. Display distance
  display.setTextSize(1);
  display.setCursor(5, 57);

  if (distance < 0)
  {
    display.print("Distance: No Echo");
  }
  else
  {
    display.print("Distance: ");
    display.print(distance, 1);
    display.print(" cm");
  }

  display.display();

  // 6. Serial Monitor
  Serial.print("Flame: ");
  Serial.print(flameState == LOW ? "DETECTED" : "NO FLAME");

  Serial.print(" | Vibration: ");
  Serial.print(vibrationAlert ? "DETECTED" : "STABLE");

  Serial.print(" | Distance: ");
  Serial.println(distance);

  delay(50);
}
