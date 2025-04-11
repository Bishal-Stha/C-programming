#include <stdio.h>

int main() {
    FILE *ptr;
    char str[100];

    // Open file for reading
    ptr = fopen("hello.txt", "r");
    if (ptr == NULL) {
        printf("Error: Unable to open hello.txt\n");
        return 1;
    }

    // Read from file
    if (fgets(str, sizeof(str), ptr) == NULL) {
        printf("Error: hello.txt is empty or reading failed\n");
        fclose(ptr);
        return 1;
    }
    fclose(ptr);

    // Open file for writing
    ptr = fopen("bishal_answer.txt", "w");
    if (ptr == NULL) {
        printf("Error: Unable to open bishal_answer.txt for writing\n");
        return 1;
    }

    // Write to file
    fprintf(ptr, "%s", str);
    fclose(ptr);

    printf("File is Successfully Written !!\n");
    return 0;
}
