/*
Write a program to display first 50 prime numbers.
*/

#include<stdio.h>
int prime(int n);
int main()
{
    int count=0;
    int n=2;
    while(count != 50){
        if(prime(n))
        {
        count++;
        printf("%d\t",n);
        }
        n++;
    }
}

int prime(int n)
{
    int c=0;
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        c++;
    }
        if(c==0)
        return 1;
        else
        return 0;
}