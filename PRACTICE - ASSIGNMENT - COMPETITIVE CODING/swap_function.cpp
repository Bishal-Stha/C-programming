#include<stdio.h>
int swap(int a, int b);
int main()
{
    int a=10,b=5;
    swap(a,b);
    printf("A:%d, B:%d\n",a,b);
}

int swap(int a,int b){
    a = a+b; //a =15
    b = a-b; //15-5 = 10
    a = a-b; //15-10 = 5
    // return a,b;
}