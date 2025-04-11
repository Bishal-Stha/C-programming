#include<stdio.h>
int main()
{
    int arr[3][4] = {
        {1,4,7,2},
        {9,1,3,4},
        {7,1,9,3}
    };

    printf("Unsorted Array:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("Sorted Array:\n");
    for(int i=0; i<3; i++){
        int temp = arr[i][0];
        for(int j=1; j<4; j++)
        {
            if(temp < arr[i][j])
            temp = arr[i][j];

            if(j==3)
            printf("%d is largest in row %d\n",temp,i+1);
        }
    }
    return 0;
}