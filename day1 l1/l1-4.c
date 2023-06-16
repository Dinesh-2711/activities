#include <stdio.h>

int main() {
    float operand1, operand2;
    char operator;

    // Read operand 1
    printf("Enter Operand 1: ");
    scanf("%f", &operand1);

    // Read operator
    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Read operand 2
    printf("Enter Operand 2: ");
    scanf("%f", &operand2);

    // Perform calculation based on the operator
    float result;
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Error: Division by zero\n");
                return 0;
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 0;
    }

    // Print the result
    printf("Result: %.2f\n", result);

    return 0;
}
