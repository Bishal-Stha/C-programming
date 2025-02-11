#include<stdio.h>
int main()
{
int first,second;
printf("Enter 1st Number: \n");
scanf("%d",&first);
printf("Enter 2nd Number: \n");
scanf("%d",&second);
// for eg. if first =10 and second =20 then
first = first+second; //first = 10+20;
second = first-second;//second = 30-20 =>10;
first = first-second; // first = 30-10 =>20;
printf("first: %d\nSecond: %d",first,second);
}
