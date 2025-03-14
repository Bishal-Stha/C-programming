/*
euta sturcture banaune school naam ko. tesma 1 dekhi 10 samma ko class ko student ko details rakhne. 
*/


#include<stdio.h>
#include<string.h>
typedef struct students{
int class_name;
int id;
char firstName[20];
char lastName[20];
}student;

struct School {
// char CTF_name; //class teacher first name.
char CTF_name[20]; //I was assigning a single character for class teacher's first name.
student std;
}sc;

int main()
{
    printf("Enter your class teacher's first name: ");
    // strcpy(sc.CTF_name,"Krishna Rajbanshi");
    scanf(" %s",&sc.CTF_name);

    printf("Enter your class name: ");
    scanf("%d",&sc.std.class_name);

    printf("Enter your ID: ");
    scanf("%d",&sc.std.id);

    printf("Enter your First Name: ");
    scanf(" %s",&sc.std.firstName);

    printf("Enter your Last Name: ");
    scanf(" %s",&sc.std.lastName);

    printf("\n");

    printf("Student Details\n");
    printf("Class\t ID\t Full Name\t Class Teacher\n");

    printf("%d\t %d\t %s %s\t %s\n",sc.std.class_name,sc.std.id,sc.std.firstName,sc.std.lastName,sc.CTF_name);
    return 0;
}