#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#define RESET "\x1B[0m"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"

bool isLeapYear(int year) {
return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int findDayOfWeek(int year, int month, int day) {
int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
year -= month < 3;
return (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
}
void printColoredCalendar(int year, int month) {
char *monthNames[] = {"January", "February", "March", "April", "May", "June",
"July", "August", "September", "October", "November", "December"};
int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
if (month == 2 && isLeapYear(year)) {
daysInMonth[1]++;
}
int dayOfWeek = findDayOfWeek(year, month, 1);
printf("Month: %s %d\n", monthNames[month - 1], year);
printf("Sun Mon Tue Wed Thu Fri Sat\n");
for (int i = 0; i < dayOfWeek; i++) {
printf(" ");
}
for (int day = 1; day <= daysInMonth[month - 1]; day++) {
if ((dayOfWeek + day - 1) % 7 == 0) {
printf(GREEN);
} else if ((dayOfWeek + day - 1) % 7 == 6) {
printf(RED);
}
printf("%3d ", day);
if ((dayOfWeek + day) % 7 == 0) {
printf(RESET);
printf("\n");
}
}
printf(RESET);
printf("\n");
}
void addNoteToFile(char *filename, char *note) {
FILE *file = fopen(filename, "a");
if (file) {
fprintf(file, "%s\n", note);
fclose(file);
printf("Note added successfully.\n");
} else {
printf("Error opening the file.\n");
}
}
void showNotes(char *filename) {
FILE *file = fopen(filename, "r");
if (file) {
char line[100];
printf("Notes:\n");
int lineNum = 1;
while (fgets(line, sizeof(line), file)) {
printf("%d. %s", lineNum, line);
lineNum++;
}
fclose(file);
} else {
printf("Error opening the file.\n");
}
}
void showReminders(char *filename) {
FILE *file = fopen(filename, "r");
if (file) {
char line[100];
time_t now = time(NULL);
struct tm *tm_now = localtime(&now);
printf("Reminders:\n");
int lineNum = 1;
while (fgets(line, sizeof(line), file)) {
struct tm tm_note;
int year, month, day;
sscanf(line, "%d %d %d", &year, &month, &day);
tm_note.tm_year = year - 1900;
tm_note.tm_mon = month - 1;
tm_note.tm_mday = day;
tm_note.tm_hour = 0;
tm_note.tm_min = 0;
tm_note.tm_sec = 0;
if (difftime(mktime(&tm_note), now) > 0) {
char *monthNames[] = {"January", "February", "March", "April", "May", "June",
"July", "August", "September", "October", "November", "December"};
printf("%d. Reminder for %s %d: %s", lineNum, monthNames[month - 1], day,
strchr(line, '\n') + 1);
lineNum++;
}
}
fclose(file);
} else {
printf("Error opening the file.\n");
}
}
void editNoteInFile(char *filename, int lineNum, char *newNote) {
FILE *file = fopen(filename, "r+");
if (file) {
char line[100];
for (int i = 1; i <= lineNum; i++) {
if (!fgets(line, sizeof(line), file)) {
printf("Note not found.\n");
fclose(file);
return;
}
}
long pos = ftell(file);
fseek(file, pos - strlen(line), SEEK_SET);
fprintf(file, "%s\n", newNote);
fclose(file);
printf("Note edited successfully.\n");
} else {
printf("Error opening the file.\n");
}
}
void addNoteToFileWithCategory(char *filename, char *category, char *note) {
FILE *file = fopen(filename, "a");
if (file) {
fprintf(file, "%s: %s\n", category, note);
fclose(file);
printf("Note added successfully.\n");
} else {
printf("Error opening the file.\n");
}
}
int main() {
int choice;
int year, month, day, lineNum;
char note[100], category[50];
while (1) {
printf("\nMAIN MENU\n");
printf("1. Print Colored Calendar\n");
printf("2. Find Day of Week and Show Reminders\n");
printf("3. Add Note\n");
printf("4. Edit Note\n");
printf("5. Show Notes\n");
printf("6. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
if (choice == 1) {
printf("Enter year and month (YYYY MM): ");
scanf("%d %d", &year, &month);
printColoredCalendar(year, month);
} else if (choice == 2) {
printf("Enter year, month, and day (YYYY MM DD): ");
scanf("%d %d %d", &year, &month, &day);
int dayOfWeek = findDayOfWeek(year, month, day);
printf("Day of week: %d\n", dayOfWeek);
showReminders("notes.txt");
} else if (choice == 3) {
printf("Enter year, month, day, and note (YYYY MM DD note): ");
scanf("%d %d %d %[^\n]s", &year, &month, &day, note);
addNoteToFile("notes.txt", note);
} else if (choice == 4) {
showNotes("notes.txt");
printf("Enter the line number of the note to edit: ");
scanf("%d", &lineNum);
printf("Enter the new note: ");
scanf(" %[^\n]s", note);
editNoteInFile("notes.txt", lineNum, note);
} else if (choice == 5) {
showNotes("notes.txt");
} else if (choice == 6) {
printf("Exiting...\n");
exit(0);
} else {
printf("Invalid choice.\n");
}
}
return 0;
}
