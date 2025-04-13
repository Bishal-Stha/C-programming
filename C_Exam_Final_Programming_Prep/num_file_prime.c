/*
Suppose a file named “Num.txt” contains a list of integers. Write a program to extract the prime numbers only from that file and write them on “Prime.txt” file.
*/

#include<stdio.h>
int primeChecker(int n);
int main()
{
int num;
FILE *ptr;
ptr =fopen("Num.txt","r");
if(ptr==NULL)
return 0;
while((fscanf(ptr,"%d",&num)) !=EOF)
{
    if(primeChecker(num)==1){
        printf("%d\n",num);
    }
}
fclose(ptr);
return 0;
}

int primeChecker(int n)
{
    int count=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i ==0)
        count++;
    }
    if(count==2)
    return 1;
}