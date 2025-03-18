//With Dynamic Memory Allocation using malloc().

#include<stdio.h>
#include<stdlib.h>

struct Students {
    char name[20];
    int roll_no;
};

int main()
{
    int n;
printf("how many records do you want to enter: ");
scanf("%d",&n);
struct Students *ptr;
ptr = (struct Students*) (malloc(n * sizeof(struct Students)));

if(ptr ==NULL)
{
    printf("Memory Allocation failed.");
    return 1;
}

for(int i=0; i<n; i++){
    printf("Enter name: ");
    scanf(" %[^\n]",ptr[i].name);
    printf("Enter roll no: ");
    scanf("%d",&ptr[i].roll_no);
}

printf("\nOutput\n");
for(int i=0; i<n; i++){
    printf("Name: %s\n",ptr[i].name);
    printf("Roll no: %d\n",ptr[i].roll_no);
}

free(ptr);
return 0;
}

/*
Without DMA.


#include<stdio.h>

struct Students {
    char name[20];
    int roll_no;
};

int main()
{
    int n;
printf("how many records do you want to enter: ");
scanf("%d",&n);
struct Students st[n];

for(int i=0; i<n; i++){
    printf("Enter name: ");
    scanf(" %[^\n]",st[i].name);
    printf("Enter roll no: ");
    scanf("%d",&st[i].roll_no);
}

printf("\nOutput\n");
for(int i=0; i<n; i++){
    printf("Name: %s\n",st[i].name);
    printf("Roll no: %d\n",st[i].roll_no);
}

return 0;
}

*/