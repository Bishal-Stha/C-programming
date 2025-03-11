/*
write a program in c to calculate the factorial using recursive function.
*/

#include<stdio.h>

int fact(int num);

int main()
{
int n =4;
printf("the factorial of %d is %d\n",n,fact(n));
}

int fact(int num){
    if(num==0 || num==1)
    return 1;

    else 
    return num* fact(num-1);
}

/*
24
4*6
3*2
2*1
*/