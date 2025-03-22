#include<stdio.h>
int fibo(int n);

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int result = fibo(n);
    printf("%dth term in fibonacci sequence is %d\n",n,result);
}

int fibo(int n){
    if(n==1)
    return 0;
    else if(n==2 || n==3)
    return 1;
    else
    return fibo(n-1)+ fibo(n-2);
}