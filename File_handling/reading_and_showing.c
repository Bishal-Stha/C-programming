#include<stdio.h>
int main()
{
    FILE *ptr;
    char str[200];
    ptr = fopen("hello.txt","r");
    fgets(str, 200, ptr);
    printf("%s",str);
    fclose(ptr);
    return 0;
}