/*
*****
****
***
**
*
 */

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=n-i; j>0; j--)//j=5 > *****
        //j=4 > ****
        //
        {
            printf("*\t");
        }
        printf("\n");
    }
}