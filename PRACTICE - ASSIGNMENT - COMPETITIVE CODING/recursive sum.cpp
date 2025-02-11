#include<stdio.h>
int recursum(int num);
int main()
{
	int n;
	printf("Enter positive number: ");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("Please Enter a postive number: ");
		return 1;
	}
	int result = recursum(n);
	printf("%d",result);
	return 0;
}

int recursum(int num)
{
	if(num==1){
		return 1;
	}
	else{
		 return num + recursum(num-1);
	}
}
