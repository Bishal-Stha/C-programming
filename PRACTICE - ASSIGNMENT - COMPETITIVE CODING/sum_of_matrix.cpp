/*
Date: 2081-09-15
Problem: Sum of Matrix using Array.
*/

#include<stdio.h>
int main()
{
	int matrix_A[3][3], matrix_B[3][3];
	printf("Enter the data in Matrix A\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("Enter matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix_A[i][j]);
		}
	}
	printf("Enter the data in Matrix B\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("Enter matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix_B[i][j]);
		}
	}
	printf("\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d\t",matrix_A[i][j]+matrix_B[i][j]);
		}
		printf("\n");
	}
}
