#include<stdio.h>
int fact(int n);

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int result = fact(n);
    printf("Factorial of %d is %d\n",n,result);
}

int fact(int n){
    if(n==0)
    return 1;

    else {
        return n * fact(n-1);
    }
}