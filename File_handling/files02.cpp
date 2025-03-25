#include<stdio.h>
#include<string.h>

struct College {
    char CollegeName[40];
    int noOfTeachers;
    float area;
};

int main()
{
    struct College c1;
    strcpy(c1.CollegeName,"Sushma Godawari College");
    c1.noOfTeachers = 49;
    c1.area = 242;

    FILE *p;
    p = fopen("college_info.txt","w");
    
    fprintf(p,"College_info\n");
    fprintf(p,"%s\n",c1.CollegeName);
    fprintf(p,"%d\n",c1.noOfTeachers);
    fprintf(p,"%.2f",c1.area);
    fclose(p);
    printf("File Written Successfully.\n");

    p = fopen("college_info.txt","r");
    while(fscanf(p," %[^\n] %d %f",c1.CollegeName,&c1.noOfTeachers,&c1.area) != EOF){
    printf("College details:\n");
    printf("Name of College: %s\n",c1.CollegeName);
    printf("No of Teachers:%d\n",c1.noOfTeachers);
    printf("Area of College Premises: %.2f sq ft.",c1.area);
    fclose(p);
    }
    return 0;
}