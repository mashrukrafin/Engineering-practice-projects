#include <stdio.h>
#include <string.h>

int main() {
    int num1, num2, result;
    char operator[4]; // Array to store the operator input

    while (1) {
        printf("Enter the first number (or 'STOP' to terminate): ");
        if (scanf("%d", &num1)== 0) {
            scanf(" %s", operator);
            if (strcmp(operator, "STOP") == 0) {
                printf("Terminating the program...\n");
                break;
            }
             else {
                printf("Invalid input. Please try again.\n");
                continue;
            }
        }
        printf("Enter the second number: ");
        if (scanf("%d", &num2) == 0) {
            printf("Invalid input. Please try again.\n");
            continue;
        }

        printf("Enter the operator (+, -, *, /): ");
        scanf(" %s", operator);

        if (strcmp(operator, "STOP") == 0) {
            printf("Terminating the program...\n");
            break;
        }

        switch (operator[0]) {
            case '+':
                result = num1 + num2;
                printf("The sum is: %d\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("The difference is: %d\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("The product is: %d\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("The quotient is: %d\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error: Invalid operator.\n");
                break;
        }
    }

    return 0;
}

