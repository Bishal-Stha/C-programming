#include<stdio.h>
#include<string.h>
int main()
{
    char name[30],address[30];
    int age;

    printf("Enter name: ");
    gets(name);

    printf("Enter Address: ");
    gets(address);

    printf("Enter age: ");
    scanf("%d",&age);

    printf("My name is %s and i am %d years old. and i live in %s.",name,age,address);
}