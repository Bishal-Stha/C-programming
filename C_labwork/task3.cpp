/*
Write a program to demonstrate the difference between local and global variables.
● Declare a global variable and modify it inside a function.
● Declare a local variable inside the function and observe its behavior.
● Print both values in main().
*/

#include<stdio.h>
int a,b;
int sum(int a, int b){
    return a+b;
}

int subtract(){
    return a-b;
}
int main()
{
 a = 5, b=10;
 printf("sum is %d\n",sum(a,b));
 printf("Product is %d\n",subtract());
 printf("B is %d",b);
 return 0;

 }
