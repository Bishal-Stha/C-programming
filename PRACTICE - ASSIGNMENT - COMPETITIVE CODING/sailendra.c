#include<stdio.h>
void primeNum(int n);
int main()
{
    printf("Prime Numbers\n");
    for(int i=2; i<=100; i++){
        primeNum(i);
    }
}

void primeNum(int n){
    int count=0;
    for(int i=2; i<=n/2; i++){
        if(n%i==0)
        count++;
    }
    if(count==0)
    printf("%d\t",n);
}
