#include <stdio.h>

int main() {

    int c; 

    // int res = getchar() != EOF;

    // putchar(res);

    // printf("%zu", sizeof(double));

    int newlines = 0, blanks = 0, tabs = 0;

    while ( ( c = getchar() ) != EOF ) {
        if ( c == '\n') ++newlines;
        else if ( c== ' ') ++blanks;
        else if ( c=='\t') ++tabs;
    }

    printf("%d lines, %d blanks, %d tabs", newlines, blanks, tabs);

}