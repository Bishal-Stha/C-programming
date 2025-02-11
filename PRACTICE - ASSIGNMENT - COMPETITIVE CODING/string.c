#include<stdio.h>
int main()
{
    char name[100];
    printf("Enter your name: ");
    scanf("%[^\n]",name);
    
    // name = "DIMAL";
    // name[0] = 'B';
    // name[1] = 'I';
    printf("%s",name);

}