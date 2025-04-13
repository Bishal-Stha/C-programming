#include<stdio.h>
int fibonacci(int n){
    if(n==1) return 0;
    else if(n==2 || n==3) return 1;
    else
    return fibonacci(n-1) + fibonacci(n-2);
}

int isPrime(int n){
    int count=0;
    int value = fibonacci(n);
    for(int i=2; i<=value/2; i++){
        if(value%i==0)
        count++;
    }
    if(count ==0)
    return 1;
    else 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(isPrime(n)==1)
    printf("number (%d) is prime.\n",fibonacci(n));
    else
    printf("number (%d) is not prime.",fibonacci(n));
    return 0;
}