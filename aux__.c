#include <stdio.h>
#include <ctype.h>  // for isspace()

// Function to count lines, words, and characters in a file
void count_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return;
    }

    int c;  // current character read from file
    int nl = 0;  // number of lines
    int nw = 0;  // number of words
    int nc = 0;  // number of characters
    int in_word = 0;  // flag to check if inside a word

    // Read characters until end of file (EOF)
    while ((c = fgetc(file)) != EOF) {
        nc++;  // Increment character count

        // Check for newline to count lines
        if (c == '\n') {
            nl++;
        }

        // Check for spaces, tabs, or newlines to count words
        if (isspace(c)) {
            if (in_word) {
                nw++;  // Increment word count if we were inside a word
                in_word = 0;  // Set flag to outside word
            }
        } else {
            in_word = 1;  // Inside a word
        }
    }

    // If the file ends while still inside a word, count the last word
    if (in_word) {
        nw++;
    }

    // Print the results
    printf("Total number of lines: %d\n", nl);
    printf("Total number of words: %d\n", nw);
    printf("Total number of characters: %d\n", nc);

    // Close the file
    fclose(file);
}

int main() {
    const char *filename = "textfile.txt";  // Change to the path of your file
    count_file(filename);
    return 0;
}
