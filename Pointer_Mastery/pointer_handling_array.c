#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7};

    int *p =arr;
    for(int i=0; i<7; i++){
        printf("%d\n",*(p+i));
    }
}