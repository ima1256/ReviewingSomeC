#include <stdio.h>
// #include "utils.h"

char* getbits(unsigned int x) {

    static char str[sizeof(x)*8 + 1] = "";

    for (int i = sizeof(x)*8 - 1; i >= 0; i--) {

        str[sizeof(x)*8 - 1 - i] = (x >> i & 1) ? '1' : '0';

    }

    str[sizeof(x)*8 + 1] = '\0';

    return str;

}

int main() {

    unsigned int x = 12345678;
    unsigned int y = 00004567;

    printf("%s", getbits(x));

}