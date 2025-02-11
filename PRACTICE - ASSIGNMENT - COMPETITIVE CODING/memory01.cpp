#include<stdio.h>
int main()
{
	int n = 28;
	int marks[6] ={10,30,45,89,53,44};
	int (*p)[6] = &marks;
//	p =&n;
	printf("%d",*p[1]);
//	printf("%d",p);
//printf("%d",&n);
}
//
