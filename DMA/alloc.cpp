#include<stdio.h>
int main()
{
    int *p;
    int a = 10;
    printf("address of a is %d\n",&a);
    p = &a;
    printf("address p is storing is %d",p);
}