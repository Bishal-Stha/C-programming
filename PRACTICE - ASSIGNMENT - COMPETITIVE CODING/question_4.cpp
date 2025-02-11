#include <stdio.h>

int main() {
    int n, i, j, count = 0;
    
    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n], visited[n];
    
    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize visited array to 0
    }
    
    // Count duplicate elements
    for (i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }
        int duplicateFound = 0;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1; // Mark as visited
                duplicateFound = 1;
            }
        }
        if (duplicateFound) {
            count++;
        }
    }
    
    // Output the result
    printf("Total number of duplicate elements: %d\n", count);
    
    return 0;
}

