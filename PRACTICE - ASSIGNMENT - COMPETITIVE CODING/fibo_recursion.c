#include<stdio.h>
int fibo(int n);
int main()
{
int num;
printf("Enter the value of num: ");
scanf("%d",&num);

for(int i=1; i<=num; i++){
    printf("%d. %d\n",i,fibo(i));
}
return 0;
}

int fibo(int n){
    if(n==1)
    return 0;
    
    else if(n==2 || n ==3)
    return 1;

    else {
        return fibo(n-1)+fibo(n-2);
    }
}