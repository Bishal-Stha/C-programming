#include<stdio.h>
int main()
{
    int p,q;
    printf("Enter p and q: ");
    scanf("%d %d",&p,&q);
    int matrix[p][q];

    printf("enter value for %dX%d matrix\n",p,q);
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    for (int i = 0; i < p; i++)
    {
        int temp = matrix[i][0];
        for (int j = 1; j < q; j++)
        {
            if (temp < matrix[i][j])
            {
                temp = matrix[i][j];
            }
        }
        printf("%d is the largest in row %d.\n", temp, i + 1);
    }

    return 0;
}