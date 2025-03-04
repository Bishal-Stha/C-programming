/*
Write a C program that reads N numbers into an array and finds the maximum value
using a user-defined function. The function should take the array as an argument and
return the largest number.
*/

#include<stdio.h>
int largestNum(int arr[], int size);
int main()
{
    int n;
    printf("Enter the size of Arr: ");
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter Array values: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int large = largestNum(arr,n);
    printf("The largest number is %d",large);
    return 0;
}

int largestNum(int arr[], int n){
    int temp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++){
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
        }
    }
}
    return arr[n-1];
}