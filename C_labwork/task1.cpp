/*
Write a C program that takes two numbers as input and calculates their sum, difference,
product, and quotient using a user-defined function. Use a function prototype and
call the function from main().
*/

#include<stdio.h>
int sum(int, int );
int difference(int, int);
int product(int, int);
int quotient(int, int);
int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    printf("Sum is %d\n",sum(a,b));
    printf("Difference is %d\n",difference(a,b));
    printf("Product is %d\n",product(a,b));
    printf("Quotient is %d\n",quotient(a,b));
    return 0;
}

int sum(int a, int b){
    return a+b;
}

int difference(int a, int b){
    return a-b;
}

int product(int a, int b){
    return a*b;
}

int quotient(int a, int b){
    return a/b;
}