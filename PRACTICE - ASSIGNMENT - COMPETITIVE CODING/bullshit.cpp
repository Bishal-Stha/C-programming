#include<stdio.h>
int pattern(int height);
int main()
{
int n;
printf("Enter the value of n: ");
scanf("%d",&n);
pattern(n);
}

int pattern(int height){
	//print pyramid of height height-1
	if(height<=0)
	return 0;
	
	else {
	
	pattern(height-1);
	//print one more row
	for(int i=0; i<height; i++)
	{
	printf("#");
	}
	printf("\n");
}
}
