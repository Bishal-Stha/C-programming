#include<stdio.h>
int factorial(int n);
int main()
{
    int n=3;
    printf("factorial of %d is %d",n,factorial(n));
    return 0;
}

int factorial(int n){
    if(n<0)
    printf("Negative numbers don't have factorials.");
    else if(n==0 || n==1)
    return 1;
    else{
        return (n* factorial(n-1));
    }
}