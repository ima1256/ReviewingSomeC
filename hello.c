#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */

#define LOWER 0
#define UPPER 300
#define STEP 20 

int main()
{

    printf("EOF value: %d\n", EOF);

    int c = getchar();
    float fahr, celsius;
    float lower, upper, step;
    fahr = LOWER;

    printf("Farenheit \t Celsius \n");

    while (fahr <= UPPER)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f \t %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }

    putchar(c);

    c = getchar();

    while ( c != EOF) {
        putchar(c);

        c = getchar();
    }

    return 0;
}
