#include<stdio.h>
#include<string.h>
int main()
{
char input[20];
printf("Enter: ");
scanf("%[^\n]",input);

printf("%s",input);
}