/*
1+2+3+4+5+6+7+8.... upto n
formula is n(n+1)/2
but we'll solve using recursive function.
*/

#include<stdio.h>
int sumOfNautralNumbers(int num)
{
    if(num==1)
    return 1;
    else {
        return num+ sumOfNautralNumbers(num-1);
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