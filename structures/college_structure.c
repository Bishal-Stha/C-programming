/*
euta sturcture banaune school naam ko. tesma 1 dekhi 10 samma ko class ko student ko details rakhne. 
*/


#include<stdio.h>
#include<string.h>
typedef struct students{
char class_name[30];
int id;
char name[50]; 
}student;

struct School {
// char CTF_name; //class teacher first name.
char CT_name[20]; //I was assigning a single character for class teacher's first name.
student std;
}sc;

int main()
{
    printf("Enter your class: ");
    scanf(" %[^\n]", sc.std.class_name);

    printf("Enter your ID: ");
    scanf(" %d",&sc.std.id);

    printf("Enter your Name: ");
    scanf(" %[^\n]", sc.std.name);
    
    printf("Enter Your Class Teacher's Name: ");
    scanf(" %[^\n]", sc.CT_name);
    printf("\n");

    printf("Student Details\n");
    printf("Class: %s\n",sc.std.class_name);
    printf("Student Id: %d\n",sc.std.id);
    printf("Name: %s\n",sc.std.name);
    printf("Class Teacher: %s\n",sc.CT_name);
    return 0;
}