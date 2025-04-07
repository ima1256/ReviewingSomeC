#include <stdio.h>
#include <ctype.h>
#include <dirent.h>

int main(int argc, char **argv)
{

    DIR *dir;
    struct dirent *entry;

    #ifdef __linux__
        print("Linux");
    #endif

    dir = opendir(".");

    if (dir == NULL)
    {
        perror("opendir");
        return 1;
    }

    while ((entry = readdir(dir)) != NULL)
    {
        printf("d_name: %s, d_ino: %ld, d_reclen: %d, d_off: %ld \n", entry->d_name, (long)entry->d_ino, entry->d_reclen);
    }

    closedir(dir);

    // printf("%d \n", argc);

    // for (int i = 0; i < argc; i++) {
    //     //printf("%s ", argv[i]);
    // }

    FILE *file = fopen("trim.c", "r");

    int c = 0;

    int lc = 0;

    while ( (c = fgetc(file) ) != EOF) {

        if ( c == '\n') {
            lc++;
        }

        
        //putchar(c);

    }

    printf("Lines %d", lc);

    fclose(file);

    return 0;
}