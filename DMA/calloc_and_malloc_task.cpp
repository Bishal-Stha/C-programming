#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    if(p == NULL)
    return 1;

    p = (int *) calloc(5,sizeof(int));
    for(int i=0; i<5; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",(p+i));
    }

    printf("Output for calloc\n");
    for(int i=0; i<5; i++){
        printf("%d\t",*(p+i));
    }
    free(p);

    printf("\n\n");

    float *ptr;
    if(ptr == NULL)
    return 1;
    ptr = (float*)malloc(10* sizeof(float));
    for(int i=0; i<10; i++){
        printf("Enter element %d: ",i+1);
        scanf("%f",(ptr+i));
    }

    printf("Output for calloc\n");
    for(int i=0; i<10; i++){
        printf("%f\t",*(ptr+i));
    }
    free(ptr);
    return 0;
}