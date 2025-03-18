#include<stdio.h>
int swap(int* a, int* b);
int main()
{
    int a =10,b=20;
    swap(&a,&b);
    printf("a is %d\n",a);
    printf("b is %d\n",b);
}

int swap(int* a, int* b){
    *a = *a + *b; //10+20 =30
    *b = *a - *b; // 30-20 =10
    *a = *a - *b; //30-10 =20
}