#include <stdio.h>

int main() {
    char c;
    int characters = 0, words = 0, lines = 0;

    printf("Enter text (Ctrl+D or Ctrl+Z to end input):\n");

    while ((c = getchar()) != EOF) {
        characters++;

        // Check for a new line
        if (c == '\n') {
            lines++;
            words++;
        }

        // Check for a space or tab to count words
        if (c == ' ' || c == '\t') {
            words++;
        }
    }

    // Handling the case where the last line might not end with a newline
    if (characters > 0) {
        lines++;
        words++;
    }

    printf("Total number of characters: %d\n", characters);
    printf("Total number of words: %d\n", words);
    printf("Total number of lines: %d\n", lines);

    return 0;
}
