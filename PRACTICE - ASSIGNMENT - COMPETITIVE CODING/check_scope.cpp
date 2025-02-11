#include<stdio.h>
int main()
{
	int a=20,b=10,c=40;
	{
		a= b+c;
		printf("%d\n",a);
	}
	printf("%d",a);
}
