/*
Q3. Write a program in c to read n numbers of values in an array
 and display them in reverse order.
 int arr[10] = {1,4,6,7,8};
 8,7,6,4,1 //10 arr[9] //arr[n-1] // n-1,0
*/
#include<stdio.h>
int main()
{
	int n=10;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0; i<n; i++)
	{
		printf("Enter the arr[%d]:\t",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=n-1; i>=0; i--)
	{
		printf("%d\n",arr[i]);
	}
	
	
}
