#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* ptr, n;
    printf("How many numbers do you want to input: ");
    scanf("%d",&n);
    ptr = (int*) calloc(n,sizeof(int));

    for(int i=0; i<n; i++){
        printf("Enter value %d: ",i+1);
        scanf("%d",(ptr+i));
    }

    for(int i=0; i<n; i++){
        printf("%d\n",*(ptr+i));
    }
    free(ptr);
}