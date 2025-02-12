#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, count = 0, r, arr[10], sum = 0;
    printf("Enter the number to check if its armstrong number or not: ");
    scanf("%d",&num);
    // Store the original number to check later
    originalNum = num;

    // Extract digits and store them in an array
    while (num != 0) {
        r = num % 10;
        num = num / 10;
        arr[count] = r;
        count++;
    }

    // Calculate the sum of the digits raised to the power of the number of digits
    for (int i = 0; i < count; i++) {
        sum += (int)(round(pow(arr[i], count)));  // Round the result to avoid precision errors
    }

    // Check if the sum equals the original number
    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
