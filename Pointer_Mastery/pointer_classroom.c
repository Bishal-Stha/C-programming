#include<stdio.h>
int main()
{
    int* p;
    int a=6.89;
    p = &a;
    printf("a is currently %d\n",a);
    *p = 100;
    printf("a is now %d",a);
}

/*
Output
6
100
*/