#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("hello.txt","w");
    fprintf(ptr,"An apple a day keeps the doctor away. Fuck you Prabesh.\n");
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