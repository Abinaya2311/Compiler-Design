#include <stdio.h>

int main() {
    char op, operand1, operand2, result;

    // Input statement: result = operand1 + operand2
    printf("Enter the input statement (e.g., result = operand1 + operand2): ");
    scanf("%c = %c %c %c", &result, &operand1, &op, &operand2);

    // Generate Three Address Code
    printf("Three Address Code:\n");
    printf("1. t1 = %c %c %c\n", operand1, op, operand2);
    printf("2. %c = t1\n", result);

    return 0;
}
