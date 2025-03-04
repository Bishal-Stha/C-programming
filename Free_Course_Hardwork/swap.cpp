#include<stdio.h>
int swap(int *a, int *b);

int main()
{
    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);

    printf("Before swapping num1 = %d, num2 = %d\n",num1,num2);
    swap(&num1,&num2);
    printf("After swapping num1 = %d, num2 = %d\n",num1,num2);
    return 0;

}

int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}