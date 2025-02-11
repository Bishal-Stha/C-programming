/*
  *
 * *
*****
*   *
*   *
*****
 */

#include<stdio.h>
int main()
{
    int i,j;
    // printf("Enter the value of n: ");
    // scanf("%d",&n);
    for ( i = 0; i < 6; i++)
    {
        for(j = 0; j<5; j++)
        {
            if (
                i == 0 && j == 2 ||        // Top center '*'
                i == 1 && (j == 1 || j == 3) ||  // Second row '*'
                i == 2 ||                  // Full row '*'
                (i >= 3 && (j == 0 || j == 4)) ||  // Vertical borders of rectangle
                i == 5                      // Bottom full row '*'
            ) {
                printf("*");
            } else {
                printf(" ");
            }

        }
        printf("\n");
    }
    
}