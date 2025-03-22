#include<stdio.h>
void swap(int *a, int* b);

int main()
{
    int a = 5,b=10;
    swap(&a,&b);

    printf("a: %d, b:%d\n",a,b);

}

void swap(int *a, int *b){
    int temp = a;
    a =b;
    b =temp;

}