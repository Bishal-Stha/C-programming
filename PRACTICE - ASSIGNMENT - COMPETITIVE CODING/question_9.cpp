/*
Q9. WAP in c to find the second largest element in an array.
*/

#include<stdio.h>
int main(){
	int n =5;
	int numbers[n],i, temp;
	for(i=0; i<n; i++){
		printf("Enter the value of numbers[%d]: ",i);
		scanf("%d",&numbers[i]);
	}
	
	for (i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap elements
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
           }
        }
    }
    
    printf("Second Largest number is %d\n",numbers[n-2]);
}














