#include<stdio.h>
int main()
{
    int n=2;
    int arr1[n][n];
    int arr2[n][n];
    int product[n][n];

    printf("Enter elements of arr1\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter elements of arr2\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            product[i][j] = 0;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                product[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }

    // Output
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d\t",product[i][j]);
        }
        printf("\n");
    }
}