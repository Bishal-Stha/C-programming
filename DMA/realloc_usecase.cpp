#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* ptr1, n;
    
    printf("Enter n: ");
    scanf("%d",&n);

    if(ptr1 ==NULL)
    return 1;
    ptr1 = (int*) malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",(ptr1+i));
    }

    for(int i=0; i<n; i++){
        printf("%d\n",*(ptr1+i));
    }

    int *ptr2;

    printf("Enter n: ");
    scanf("%d",&n);
    if(ptr2 ==NULL)
    return 1;
    ptr2 = (int*)realloc(ptr1,n*sizeof(int));

    printf("Previous pointer Address: %p\n",ptr1);
    printf("Current pointer Address: %p\n",ptr2);

    for(int i=0; i<n; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",(ptr2+i));
    }

    for(int i=0; i<n; i++){
        printf("%d\n",*(ptr2+i));
    }
    free(ptr1);
    free(ptr2);
}