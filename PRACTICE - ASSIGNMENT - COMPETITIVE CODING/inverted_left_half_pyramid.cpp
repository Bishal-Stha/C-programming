/*
******
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
        for(j=0; j<n; j++)
        {
            if(
                i==0 ||
                (i==1 && j>0) ||
                (i==2 && j>1) ||
                (i==3 && j>2) ||
                (i==4 && j>3) ||
                (i==5 && j>4)
            ) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}