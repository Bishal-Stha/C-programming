#include<stdio.h>
int main()
{
    int num;
    char option;
    do {
        printf("Enter a number: ");
        scanf("%d",&num);
        printf("You entered %d",num);
        printf("\n");
        printf("Do you want to enter another number: ");
        scanf(" %c",&option);
    }
    while(option=='Y' || option == 'y');
}