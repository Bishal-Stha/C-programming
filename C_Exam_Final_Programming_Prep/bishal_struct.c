/*
 Create a structure named course with name, code, and credit_hour as its members. Write a program using this structure to read data of 2courses and display data of those curses with credit_hour greater than 3.
*/

#include<stdio.h>
struct Course {
    char name[22];
    int code;
    float credit_hour;
};

int main()
{
    struct Course course[2];
    for(int i=0; i<2; i++)
    {
        printf("Enter course name: ");
        // gets(course[i].name);
        // fgets(course[i].name,sizeof(course[i].name),stdin);
        scanf(" %[^\n]",course[i].name);
        getchar();
        printf("Enter course code: ");
        scanf("%d",&course[i].code);
        printf("Enter credit hour: ");
        scanf("%f",&course[i].credit_hour);
    }

    printf("Output\n");
    for(int x=0; x<2;x++)
    {
        if(course[x].credit_hour>3)
        {
        printf("Course name: %s\n",course[x].name);
        printf("Course code: %d\n",course[x].code);
        printf("Course credit hour: %.2sf\n",course[x].credit_hour);
        }
}
}