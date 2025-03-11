
#include <conio.h>
#include <stdio.h>
#include <string.h>

struct student {
    char name[30];
    int roll;
    float marks;
};

int main() {
    struct student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details of student %d\n", i + 1);

        printf("Name: ");
        gets(students[i].name); // Use gets to read name
        getch(); // Clear input buffer

        printf("Roll no: ");
        scanf("%d", &students[i].roll);
        getch(); // Clear input buffer

        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getch(); // Clear input buffer
    }

    printf("Student Details\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d -> Name: %s, Roll: %d, Marks: %.2f\n", i + 1, students[i].name, students[i].roll, students[i].marks);
    }
return 0;
}