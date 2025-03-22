#include<stdio.h>
int evenNumSum();

int main()
{
    int result = evenNumSum();
    printf("sum of first 10 even number is %d\n",result);
}

int evenNumSum(){
    int sum=0;
    for(int i=1; i<=10; i++){
        sum += 2*i;
    }
    return sum;
}