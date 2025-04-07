#include <stdio.h>

#define BUFFER_SIZE 1024

void print_bits(unsigned int x) {

    for (int i = sizeof(x) * 8 - 1; i > -1; i--) {
        printf("%d", (x >> i) & 1);
    }

    printf("\n");

}

int main() {

    unsigned int x = 0x12345678;

    char *px = (char *) &x;

    // printf("First byte %x", *px);
    // px++;
    // printf("Second byte %x", *px);
    // px++;
    // px++;
    // px++;
    // printf("Fifth byte %x", *px);


    FILE *file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("Error opening the file");
        return 1;
    }

    fprintf(file, "Hello wodfsdrld file\n");
    int c = 0;

    while ( ( c = getchar()) != EOF) {
        fputc(c, file);
    }

    printf("\n");
    print_bits(x);

    fclose(file);


}