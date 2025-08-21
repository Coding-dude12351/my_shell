#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CMD_LEN 1024

int main() {
    char cmd[MAX_CMD_LEN];

    printf("Welcome to myshell! Type 'exit' to quit.\n");

    while (1) {
        printf("myshell> ");
        if (fgets(cmd, sizeof(cmd), stdin) == NULL) {
            printf("\n");
            break;
        }

        // Remove newline character
        cmd[strcspn(cmd, "\n")] = 0;

        // Ignore empty input
        if (strlen(cmd) == 0) {
            continue;
        }

        // Built-in help command
        if (strcmp(cmd, "help") == 0) {
            printf("myshell commands:\n");
            printf("  help  - Show this help message\n");
            printf("  exit  - Exit the shell\n");
            printf("  Any other command will be executed by the system\n");
            continue;
        }

        // Exit shell
        if (strcmp(cmd, "exit") == 0) {
            printf("Goodbye!\n");
            break;
        }

        // Run command
        int ret = system(cmd);
        if (ret == -1) {
            perror("system");
        }
    }

    return 0;
}