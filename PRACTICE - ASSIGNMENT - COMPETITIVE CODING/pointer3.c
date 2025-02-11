#include <stdio.h>

// Function to modify array elements
void modifyArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;  // Modify each element
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Before function call: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Passing array (array name acts as a pointer)
    modifyArray(numbers, size);

    printf("After function call: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

