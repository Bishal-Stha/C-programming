/*
Q11. WAP in c for the subtraction of two matrices.
*/

#include<stdio.h>
int main(){
	int matrixA[2][2], matrixB[2][2],matrixSubtract[2][2],i,j;
	
	for(i=0;i<2; i++){
		for(j=0;j<2; j++){
			printf("Enter the value in matrix A[%d][%d]: ",i,j);
			scanf("%d",&matrixA[i][j]);
		}
	}
	for(i=0;i<2; i++){
		for(j=0;j<2; j++){
			printf("Enter the value in matrix B[%d][%d]: ",i,j);
			scanf("%d",&matrixB[i][j]);
		}
	}
	
	for(i=0;i<2; i++){
		for(j=0;j<2; j++){
		matrixSubtract[i][j] = matrixA[i][j] - matrixB[i][j];
		}
	}
	
	for(i=0;i<2; i++){
		for(j=0;j<2; j++){
			printf("%d\t",matrixSubtract[i][j]);
		}
		printf("\n");
	}
	
}
