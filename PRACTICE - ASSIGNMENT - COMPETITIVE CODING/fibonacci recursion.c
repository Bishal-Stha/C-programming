#include<stdio.h>
int fibo(n);
int main()
{
	int positiveNumber;
printf("Enter a number: ");
scanf("%d",&positiveNumber);
if(positiveNumber<=0)
{
	printf("Please enter a positive Number\n");
	return 1;
}
int result = fibo(positiveNumber);
printf("%d\t",result);
}

int fibo(n){
	if(n==1)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fibo(n-1)+fibo(n-2);
		}	
}
