#include<stdio.h>
int main()
{
	char grade, desc[30];
	printf("Enter your grade: ");
	scanf("%c",&grade);
	
	if(grade >= 'A' && grade <= 'F'){
	switch(grade){
			case 'A': {
				desc[30] = "Wow";
				break;
			}
			
		}
	}
	printf("%s",desc);
}
