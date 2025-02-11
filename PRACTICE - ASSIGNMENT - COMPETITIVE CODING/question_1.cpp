/*
Q1. write a program in c to store elements in an array and print them.
*/

#include<stdio.h>
int main()
{
	int arr[10];
	for(int i=0; i<10; i++){
		printf("Enter arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<10; i++)
	{
		printf("%d\n",arr[i]);n
	}
}
