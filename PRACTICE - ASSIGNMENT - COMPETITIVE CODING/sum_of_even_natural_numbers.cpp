#include<stdio.h>
int sumOfNautralNumbers(int num)
{
    if(num==1)
    return 2;
    else {
        return num*num+num;
    }
}

int main()
{
int num;
printf("Enter the value of num: ");
scanf("%d",&num);

    printf("The sum is %d\n",sumOfNautralNumbers(num));

return 0;
}