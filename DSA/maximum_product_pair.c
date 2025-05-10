#include<stdio.h>
int main()
{
 int num[] = {3, 6, 8, 7, 4};
 int target=30, max_product=0,product=0;
 int n= sizeof(num)/sizeof(num[0]);
 int indexes[2];
 for(int i=0; i<n-1; i++)
 {
    for(int j=i+1; j<n; j++)
    {
        product =num[i]*num[j];
        if(product >=target)
        {
            if(product > max_product)
            max_product =product;
        }
    }
 }
 if(max_product >=target)
 printf("Max product is %d\n",max_product);
 else
 printf("Product of two numbers greater than target value doesn't exist.");
 return 0;
}