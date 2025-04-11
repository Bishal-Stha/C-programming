#include<stdio.h>
#include<string.h>

struct Student {
    char name[32];
    int roll_no;
    float gpa;
};

int main() {
    int rollno;
    struct Student std[3];

    // Step 1: Writing to File
    for(int i=0; i<3; i++) {
        printf("Enter Details of Student %d\n", i+1);
        printf("Enter name: ");
        scanf(" %[^\n]", std[i].name);
        printf("Enter roll no: ");
        scanf("%d", &std[i].roll_no);
        printf("Enter gpa: ");
        scanf("%f", &std[i].gpa);
    }

    FILE *ptr = fopen("students.txt", "w");
    for(int i=0; i<3; i++) {
        fprintf(ptr, "%s %d %.2f\n", std[i].name, std[i].roll_no, std[i].gpa);
    }
    fclose(ptr);
    printf("File Written Successfully.\n");

    // Step 2: Searching from File
    printf("\nEnter roll number to search: ");
    scanf("%d", &rollno);

    struct Student s;
    int found = 0;
    ptr = fopen("students.txt", "r");
    while(fscanf(ptr, " %[^\n] %d %f", s.name, &s.roll_no, &s.gpa) != EOF) {
        if(s.roll_no == rollno) {
            printf("\nStudent Found:\n");
            printf("Name: %s\n", s.name);
            printf("Roll no: %d\n", s.roll_no);
            printf("GPA: %.2f\n", s.gpa);
            found = 1;
            break;
        }
    }
    fclose(ptr);

    if(!found)
        printf("Student Not Found !!\n");

    return 0;
}
