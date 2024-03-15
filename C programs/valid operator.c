#include <stdio.h>
#include <stdbool.h>

// Function to check if a character is a valid arithmetic operator
bool isValidOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);

    printf("Valid Operators: ");
    for (int i = 0; input[i] != '\0'; i++) {
        if (isValidOperator(input[i])) {
            printf("%c ", input[i]);
        }
    }

    return 0;
}
