#include<stdio.h>
int fibo(int n)
{
    if(n==1)
    return 0;
    else if(n==2 || n==3)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}

void primeChecker(int n){
    int count=0;
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==0)
    printf("%d is prime number.",n);
    else
    printf("%d is not prime.",n);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int num =fibo(n);
    printf("%dth term of fibonacci sequence is %d\n",n,num);
    primeChecker(num);
    return 0;
}