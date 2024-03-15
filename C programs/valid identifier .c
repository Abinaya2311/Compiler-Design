#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidIdentifier(char *identifier) {
    // Check if the first character is a letter or underscore
    if (!(isalpha(identifier[0]) || identifier[0] == '_')) {
        return 0;
    }

    // Check each subsequent character
    int i;
    for (i = 1; i < strlen(identifier); i++) {
        // If the character is not alphanumeric or underscore, it's invalid
        if (!(isalnum(identifier[i]) || identifier[i] == '_')) {
            return 0;
        }
    }
    
    // If all characters are valid, return 1 (true)
    return 1;
}

int main() {
    char identifier[100];

    // Input identifier from user
    printf("Enter an identifier: ");
    scanf("%s", identifier);

    // Check if the identifier is valid and print the result
    if (isValidIdentifier(identifier)) {
        printf("Valid identifier.\n");
    } else {
        printf("Invalid identifier.\n");
    }

    return 0;
}
