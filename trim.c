#include <stdio.h>
#include <conio.h>

#define BLANK ' '
#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'

int main()
{

    int c = 0;

    char b = '\b';

    printf("Char (%c%c%c) is ascii %d", b, b, b, b);
    printf("sdaf \b\b\b\b\b dsfasdf");

    while ((c = getch()) != EOF)
    {

        if (c == TAB) printf("\\t");
        else if (c == BACKSPACE) printf("jj");
        else if (c == BACKSLASH) printf("\\\\");
        else putchar(c);
    }
}