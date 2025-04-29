#include <stdio.h>
#include <ctype.h>

int main() {
    int c, count = 0;
    int in_word = 0;

    printf("Enter text (press Ctrl+D to signal EOF):\n");

    c = getchar(); // Initial read
    while (c != EOF) {
        // Check if the character is a valid word character
        if (isalnum(c)) {
            if (!in_word) {
                in_word = 1;  // Start of a new word
            }
        } else {
            if (in_word) {
                count++;  // End of a word
                in_word = 0;
            }
        }
        c = getchar(); // Read the next character
    }

    // Count the last word if input ends while in a word
    if (in_word) {
        count++;
    }

    printf("Number of words: %d\n", count);
    return 0;
}
