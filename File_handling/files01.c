#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("hello.txt","w");
    char str[1000];
    printf("Write whatever you like: ");
    scanf(" %[^\n]",str);
    fprintf(ptr,"%s",str);
    fclose(ptr);
    printf("File written successfully.");
    return 0;

    /*
    FILE *P;
    p = fopen("file.txt","w") //w,a,r;
    fprintf(p,"message");
    scanf(p,"format specifier",variable_name);
    fclose(p);
    */
}