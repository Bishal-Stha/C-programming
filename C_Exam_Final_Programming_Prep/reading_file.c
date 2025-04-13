#include<stdio.h>
int main()
{
    FILE *ptr;
    char ch;
    char str[20];
    ptr = fopen("students.txt","r");

    // while((ch =fgetc(ptr)) !=EOF){
    //     printf("%c",ch);
    // }

    while((fscanf(ptr,"%s",str))!= EOF)
    {
        printf("%s ",str);
    }
    fclose(ptr);
}