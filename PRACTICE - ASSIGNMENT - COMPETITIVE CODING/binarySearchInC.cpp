#include<stdio.h>
int main(){
	//Binary Search in C
	int list[] = {11,12,13,14,15,16,17,18,19,20,22,43,55,89,101,108};
	int searchedElement;
	
	int low = 0;
	//int high = -1 + sizeof(list)/4;
	int high = (sizeof(list) / sizeof(list[0])) - 1; 
	int i = 0;
	int result = -1;
	
	while(low <= high){
	i++;
	printf("Search Count: %d\n",i);
	int mid = (low + high)/2;
	if(list[mid] > searchedElement){
		high = mid-1;
	}
	else if(list[mid] < searchedElement){
		low = mid +1;
	}
	else{
		result = list[mid];
		break;
	}
	
	}
	if(result != -1){
		printf("%d is found.",searchedElement);
	}
	else{
		printf("%d is not found.",searchedElement);
	}
	
}
