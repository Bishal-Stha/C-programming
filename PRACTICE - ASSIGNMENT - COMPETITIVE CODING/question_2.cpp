/*
Q2. Write a program in c to sum of all elements of the array.
*/
#include<stdio.h>
int main()
{
	int arr[10], sum =0;
	for(int i=0; i<10; i++)
	{
		printf("Enter the arr[%d]:\t",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<10; i++)
	{
		sum += arr[i];
	}
	
	printf("The sum of array is %d",sum);
	
}
