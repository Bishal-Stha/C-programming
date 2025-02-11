#include<stdio.h>
#include<string.h>
int main()
{
	char name[20],address[20];
	FILE *p;
	p = fopen("UserDetail.csv","w");
	printf("\nEnter your name: ");
	gets(name);
	printf("Enter your address: ");
	gets(address);	
	fprintf(p,"Name: %s\nAddress: %s\n",name,address);
	fclose(p);
}
