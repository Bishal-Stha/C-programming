#include<stdio.h>
#include<stdlib.h>
int main(){
    int*p, n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    p = (int*) malloc(n * sizeof(int));
    printf("memory allocates the address: %d\n",p);
    for(int i=0; i<n; i++){
        printf("Enter number: ");
        scanf("%d",(p+i));
    }

    for(int i=0; i<n; i++){
        printf("%d\n",*(p+i));        
    }

    free(p);
    return 0;
}