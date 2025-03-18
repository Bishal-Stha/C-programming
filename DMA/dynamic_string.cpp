#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *cptr;
    int n = 10;

    cptr = (char*) malloc(n * sizeof(char));
    if (cptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    while (1) {
        printf("Enter your name (Max %d chars): ", n - 1);
        fgets(cptr, n, stdin);
        cptr[strcspn(cptr, "\n")] = '\0';  // Remove newline

        // Check if the input completely filled cptr (excluding '\0')
        if (strlen(cptr) == n - 1) {
            char *temp = (char*) realloc(cptr, 2 * n * sizeof(char));
            if (temp == NULL) {
                printf("Memory reallocation failed\n");
                free(cptr);
                return 1;
            }

            cptr = temp;
            n *= 2;
            printf("Buffer expanded to %d characters.\n", n - 1);
        } else {
            break;  // Exit loop if input is not fully occupying the buffer
        }
    }

    printf("Final name stored: %s\n", cptr);

    free(cptr);
    return 0;
}
