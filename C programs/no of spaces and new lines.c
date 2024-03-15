#include <stdio.h>
int main() {
    char ch;
    int spaces = 0, newlines = 0;
    printf("Enter a string (Ctrl+Z to end): \n"); 

    while ((ch = getchar()) != EOF)
	 {
        if (ch == ' ') {
            spaces++;
        } else if (ch == '\n') {
            newlines++;
        }
    }
    printf("Number of spaces: %d\n", spaces);
    printf("Number of newlines: %d\n", newlines);
}
