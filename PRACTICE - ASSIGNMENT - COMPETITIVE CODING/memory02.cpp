#include<stdio.h>
int main()
{
	char name[20] = "Bishal";
	char *p = name;
	for(int i=0; i<6;i++)
	{
//		printf("%c\n",*(p+i));
		printf("%s\n",&name[i]);
		//actually under the hood ma *(p+1) run vaye pani syntactic sugar garerw p[i] le ni kaam garxa
	}
	
}
