#include<stdio.h>
#include<stdlib.h>

struct Students {
char name[32];
int roll_no;
float gpa;
};

int main()
{
int roll;
struct Students *std = (struct Students*) malloc(3* sizeof(struct Students));
for (int i = 0; i < 3; i++)
{
    printf("enter record %d\n",i+1);
    scanf(" %[^\n]",(std+i)->name);
    scanf("%d %f",&(std+i)->roll_no,&(std+i)->gpa);
}

printf("Enter a roll no: ");
scanf("%d",&roll);

int found =0;
for(int i=0; i<3; i++)
{
    if(roll == (std+i)->roll_no){
         printf("\nName: %s\n",(std+i)->name);
         printf("Roll no: %d\n",(std+i)->roll_no);
         printf("GPA: %f\n",(std+i)->gpa);
         found++;
    }
}
if(found ==0)
printf("Student Not Found !");

free(std);

}//end