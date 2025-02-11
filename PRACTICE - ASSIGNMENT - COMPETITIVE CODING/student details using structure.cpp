#include<stdio.h>
#include<string.h>
int main()
{
	struct student {
		int sn;
		char name[20];
	}st[2];
	
	for(int i=0; i<2;i++)
	{
		printf("Details of Student %d\n",i+1);
		printf("Enter symbol number: ");
		scanf("%d",&st[i].sn);
		printf("Enter Student Name: ");
		scanf("%s",st[i].name);
	}
	for(int i=0;i<2;i++)
	{
		printf("Student %d\n",i+1);
		printf("S.N.: %d\n",st[i].sn);
		printf("Name: %s\n",st[i].name);
	}
}

