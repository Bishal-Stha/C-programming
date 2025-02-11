/*
Date: 2081-09-15
Problem: Write a program in c to enter name, age and address from user and write in into the 
file named info.txt by creating it using file handling.
*/

#include<stdio.h>
#include<string.h>
int main(){
	char name[20];
	char address[30];
	int age;
	printf("Enter name: ");
	gets(name);
	printf("Enter Address: ");
	gets(address);
	printf("Enter Age: ");
	scanf("%d",&age);
	
	FILE *fptr;
	fptr = fopen("info.txt","w");
	fprintf(fptr,"Name: %s\n",name);
	fprintf(fptr,"Name: %s\n",address);
	fprintf(fptr,"Name: %d\n",age);
	fclose(fptr);
	printf("File is Successfully Written !");
}
