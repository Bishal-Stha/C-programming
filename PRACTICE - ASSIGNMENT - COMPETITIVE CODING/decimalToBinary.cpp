#include<stdio.h>
#include<math.h>
long deciToBi(long num);
int main()
{
    long n;
    printf("Enter a number: ");
    scanf("%ld",&n);
    long output = deciToBi(n);
    printf("Decimal: %ld\nBinary: %ld\n",n,output);
    return 0;
}

long deciToBi(long num)
{
    long sum=0;
    int c=0,r;

    while(num !=0){
        r = num%2;
        sum += r*pow(10,c);
        c++;
        num = num/2;
    }
    return sum;
}