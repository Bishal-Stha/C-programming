/*
Q7. Write a program in c to separate odd and even integers into two separate arrays.
*/

#include<stdio.h>
int main(){
	int n=5, x=0, y=0;
	int numbers[n], odd[n], even[n];
	for(int i=0; i<n; i++){
		printf("Enter the value of numbers[%d]: ",i);
		scanf("%d",&numbers[i]);
	}
	//Main Logic is Here !!
	for(int i=0; i<n; i++){ //numbers[0]  =5
	
	if(numbers[i] != 0) {
		
	if(numbers[i]%2 !=0){
		odd[x] = numbers[i];
		x++;
	}
	else {
		even[y] = numbers[i];
		y++;
	}
	} else{
		printf("0 is neither odd nor even.\n");
	}
}
if(x>0){
	printf("Odd array\n");
	for(int i=0; i<x; i++){
		printf("%d\n",odd[i]);
	}
}
	if(y>0){
		
	printf("Even array\n");
	for(int i=0; i<y; i++){
		printf("%d\n",even[i]);
	}
	}
}
