#include<stdio.h>

int main()
{
    int a[5];
    int count = 0;
    int visited[5] = {0}; // Array to track if an element has been processed

    printf("Enter 5 inputs: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (visited[i]) {
            continue; // Skip already processed elements
        }
        int duplicate_found = 0;
        for (int j = i + 1; j < 5; j++) {
            if (a[i] == a[j]) {
                duplicate_found = 1;
                visited[j] = 1; // Mark this duplicate as processed
            }
        }
        if (duplicate_found) {
            count++;
        }
    }

    printf("Total duplicate elements are: %d\n", count);
    return 0;
}
