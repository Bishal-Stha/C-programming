/*
Transpose:
[
1   2   3
4   5   6
7   8   9
]

to 
[
1   4   7
2   5   8
3   6   9
]

you can see the pattern. 1,5 and 9 are in their original position where others changed, but not randomly.
3-> [0][2] changed to [2][0]
4-> [1][0] changed to [0][1]
i.e. we can transpose the matrix if we change their i and j.
 */

#include<stdio.h>
int main()
{
    int i,j, arr[3][3];
    printf("Enter the value of array: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    //Print original matrix
    printf("Original Matrix\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    //Print original matrix
    printf("Transposed Matrix\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}