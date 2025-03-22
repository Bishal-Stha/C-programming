#include<stdio.h>

// Function prototype
void input(int arr[], int size);
void LargeAndSmall(int arr[], int size);

// Function to find largest and smallest elements and their positions
void LargeAndSmall(int arr[], int size) {
    int smallPos = 0, largePos = 0;  // Initialize positions
    int tempS = arr[0], tempL = arr[0];  // Initialize smallest and largest

    for(int i = 1; i < size; i++) {  // Start loop from index 1
        if(tempL < arr[i]) {
            tempL = arr[i];
            largePos = i;
        }

        if(tempS > arr[i]) {
            tempS = arr[i];
            smallPos = i;
        }
    }

    // Print results
    printf("%d is the largest number and is at position %d\n", tempL, largePos);
    printf("%d is the smallest number and is at position %d\n", tempS, smallPos);
}

// Function to take array input
void input(int arr[], int size) {
    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Main function
int main() {
    int arr[10];
    input(arr, 10);
    LargeAndSmall(arr, 10);
    return 0;
}
