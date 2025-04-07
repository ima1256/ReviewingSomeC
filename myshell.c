#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_CMD_LEN 1024
#define MAX_ARGS 64

void prompt() {
    printf("SimpleShell>");
}

int main(int argc, char **argv) {

    char cmd[MAX_CMD_LEN];

    while(1) {
        prompt();

        if (fgets(cmd, sizeof(cmd), stdin) == NULL) {
            printf("Exiting shell...");
            break;
        }
    }

    return 0;

}