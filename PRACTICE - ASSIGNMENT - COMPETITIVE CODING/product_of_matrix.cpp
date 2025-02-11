/*
Date: 2081-09-15
Problem: Multiplication of Matrix using Array.
*/

#include<stdio.h>
int main(){
	int matrixA[3][3],matrixB[3][3],result[3][3];
	int i,j,k;
	
	printf("Enter the value in Matrix A\n");
	for(i=0;i<3; i++){
		for(j=0; j<3; j++){
			printf("Enter MatrixA[%d][%d]: ",i,j);
			scanf("%d",&matrixA[i][j]);
		}
	}
	
	printf("Enter the value in Matrix B\n");
	for(i=0;i<3; i++){
		for(j=0; j<3; j++){
			printf("Enter MatrixB[%d][%d]: ",i,j);
			scanf("%d",&matrixB[i][j]);
		}
	}
	
	for(i=0;i<3; i++){
		for(j=0; j<3; j++){
			result[i][j] =0;
		}
	}
	
	for(i=0;i<3; i++){
		for(j=0; j<3; j++){
			for(k=0; k<3; k++){
				result[i][j] += matrixA[i][k] * matrixB[k][j];
			}
		}
	}
	
	printf("The product of MatrixA and MatrixB\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
}
