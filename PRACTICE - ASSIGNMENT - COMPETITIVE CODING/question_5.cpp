/*
Q5. WAP in c to copy the elements of one array into another array.
*/

#include<stdio.h>
int main()
{
	int arr[] = {10,30,50,50,33,524,524,44,10,55,45}; // total array size = 32
	int size = sizeof(arr)/sizeof(arr[0]);//index size = 4 32/4 = 8
	int arr2[size];// value would be pasted here.
	
	for(int i=0; i<size; i++){ 
		arr2[i] = arr[i];
	}
	
	for(int i=0; i<size; i++){
		printf("%d %d\n",arr[i],arr2[i]);
	}

}
