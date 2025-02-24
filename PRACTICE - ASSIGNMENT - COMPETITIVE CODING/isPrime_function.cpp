#include<stdio.h>
int isPrime(int num);
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d",&num);

    if(isPrime(num)==1)
    printf("%d is Prime.",num);
    else
    printf("%d is not Prime.",num);
}

int isPrime(int num){
    int count=0;
    for(int i=2; i<num/2; i++){
        if(num%i ==0)
        count++;
    }
    if(count >0)
    return 0;
    else
    return 1;
}