#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p = malloc(sizeof(int)*50);
    if(p ==NULL)
    return 1;
    int *ptr =realloc(p,sizeof(int)*100);
    for(int i=0; i<100; i++)
    {
        *(ptr+i) =i;
    }

    for(int j=0; j<100; j++)
    {
        printf("%d\n",*(ptr+j));
    }
    free(ptr);
    free(p);
    return 0;
} 