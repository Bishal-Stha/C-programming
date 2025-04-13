/*
Why do we need data files? What are the different file opening modes? Write a program that reads data from a file “input.txt” and writes to “output.txt” file.
*/

#include<stdio.h>
int main()
{
    char text[200];
    int c=0;
    char ch;
    FILE *p = fopen("Input.txt","w");
    if(p ==NULL){
        printf("File can not written.");
    return 0;
    }

    fprintf(p,"An apple a day keeps the doctor away. A quick brown fox jumps over the lazy dog.");
    fclose(p);

    FILE *fp =fopen("Input.txt","r");
    if(fp==NULL)
    return 0;
    while((fscanf(fp,"%c",&ch))!=EOF){
        text[c++] = ch;
    }

    fclose(fp);
    text[c] ='\0';

    printf("%s",text);

    p = fopen("Output.txt","w");
    if(p==NULL)
    return 0;
    fprintf(p,"%s",text);
    fclose(p);
    return 0;
}