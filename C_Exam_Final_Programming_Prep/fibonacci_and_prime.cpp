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
    for(int i=2; i<=n/2; i++){
        if(n%i==0)
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
    printf("number is prime.\n");
    else
    printf("number is not prime.");
    return 0;
}