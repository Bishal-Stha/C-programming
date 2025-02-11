//Determinant of two matrix
/*
For 2X2 Matrix Only.
for eg:
A = [
    10  20
    20  30
    ]
|A| = 10*30 - 20*20
    = 30 - 40
    = -10

    a[0][0]*a[1][1] - a[0][1]*a[1][0]

For 3X3 Matrix Only.
for eg:
A = [
    10  20  30
    40  50  60
    70  80  90
    ]
|A| = 10(50*90-60*80) -20(40*90-60*70)+30(40*80-50*70);
    = -300 - 120 - 90
    = -510

    a[0][0]*(a[1][1]*a[2][2] - a[2][1]*a[1][2]) - a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[2][1]) + a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1])
*/

#include <stdio.h>

int main() {
    int arr_2d[2][2], arr[3][3];
    int is2X2;
    int i, j;
    int matrix_det_2X2, matrix_det_3X3;

    printf("Enter the following:\n");
    printf("0: 3X3 matrix determinant calculation\n1: 2X2 matrix determinant calculation\n");
    scanf("%d", &is2X2);

    if (is2X2 == 1) {
        // Input for 2x2 matrix
        printf("Enter values for the 2x2 matrix:\n");
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                printf("Enter value of arr_2d[%d][%d]: ", i, j);
                scanf("%d", &arr_2d[i][j]);
            }
        }
        // Determinant calculation
        matrix_det_2X2 = arr_2d[0][0] * arr_2d[1][1] - arr_2d[0][1] * arr_2d[1][0];
        printf("The determinant of the 2x2 matrix is: %d\n", matrix_det_2X2);

    } else {
        // Input for 3x3 matrix
        printf("Enter values for the 3x3 matrix:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("Enter value of arr[%d][%d]: ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }
        // Determinant calculation
        matrix_det_3X3 = arr[0][0] * (arr[1][1] * arr[2][2] - arr[2][1] * arr[1][2]) 
                       - arr[0][1] * (arr[1][0] * arr[2][2] - arr[2][0] * arr[1][2]) 
                       + arr[0][2] * (arr[1][0] * arr[2][1] - arr[2][0] * arr[1][1]);

        printf("The determinant of the 3x3 matrix is: %d\n", matrix_det_3X3);
    }

    return 0;
}
