/*
Changes i made to make it work.
scanf("%s",st[i].name); ❌❌
scanf(" %[^\n]",st[i].name); one space before % clears the \n from previous input. %[^\n] takes the whole line as a string input. ✅✅
*/

#include<stdio.h>
#include<string.h>
char const *passOrFail(float percentage, float marks[]);

int main()
{
    int n,sum;
    char subjects[5][50] = {"Physics", "Mathematics", "C Programming", "Digital Logic", "Introduction to Information Technology"};
    printf("Enter how many records you want to enter: ");
    scanf("%d",&n);

    struct students{
        int id;
        char name[30];
        float marks[5];
    } st[n];

    //file handling 
    FILE *p;


    //Value Assignment
    for(int i=0; i<n; i++){
        printf("\nEnter Record %d\n",i+1);
        printf("Enter your Roll No: ");
        scanf(" %d",&st[i].id);

        printf("Enter your full name: ");
        scanf(" %[^\n]", st[i].name);
        // fgets(st[i].name,sizeof(st[i].name),stdin);
        // gets(st[i].name);
        // getchar();

        printf("Enter your marks of following subjects\n");
        printf("Full marks is 60\n");
        for(int j=0; j<5; j++){
            printf("Enter the subject of %s: ",subjects[j]);
            scanf("%f",&st[i].marks[j]);
        }
    }

    //Calculation and Displaying
    float percentage[n];
    for(int i=0; i<n; i++)
    {
        sum =0;
        for(int j=0; j<5; j++){
            sum += st[i].marks[j];
        }
        percentage[i] = sum/3; 
    }

    printf("\n");

// printf("Roll No\t Name\t\t Physics Math\t C\t DL\t IT\t [%%]\t Status\n");
printf("Output\n");
for(int i=0; i<n; i++){
    // printf("%d\t %s\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f\t %s\n",st[i].id, st[i].name, st[i].marks[0],st[i].marks[1],st[i].marks[2],st[i].marks[3],st[i].marks[4],percentage[i],passOrFail(percentage[i],st[i].marks));
    printf("Id: %d\n",st[i].id);
    printf("Name: %s\n",st[i].name);
    printf("Physics: %.2f\n",st[i].marks[0]);
    printf("Mathematics: %.2f\n",st[i].marks[1]);
    printf("C Programming: %.2f\n",st[i].marks[2]);
    printf("Digital Logic: %.2f\n",st[i].marks[3]);
    printf("IT: %.2f\n",st[i].marks[4]);
    printf("Percentage: %.2f %% \n",percentage[i]);
    printf("Academic Status: %s\n",passOrFail(percentage[i],st[i].marks));
    printf("\n");
}

for (int i = 0; i < n; i++) {
    char fileName[200]; // Buffer to store the full file path
    sprintf(fileName, "D:\\Bishal_Shrestha\\Programming_I_Learn\\C\\structures\\results\\result_%d.docx", i + 1); // Create a unique file name for each iteration

    p = fopen(fileName, "w"); // Pass the dynamically generated file name

    if (p == NULL) { // Check if file opening was successful
        printf("Error creating the file '%s'.\n", fileName);
        continue; // Skip to the next iteration if opening fails
    }

    // Write data to the file
    fprintf(p, "Id: %d\n", st[i].id);
    fprintf(p, "Name: %s\n", st[i].name);
    fprintf(p, "Physics: %.2f\n", st[i].marks[0]);
    fprintf(p, "Mathematics: %.2f\n", st[i].marks[1]);
    fprintf(p, "C Programming: %.2f\n", st[i].marks[2]);
    fprintf(p, "Digital Logic: %.2f\n", st[i].marks[3]);
    fprintf(p, "IT: %.2f\n", st[i].marks[4]);
    fprintf(p, "Percentage: %.2f %%\n", percentage[i]);
    fprintf(p, "Academic Status: %s\n", passOrFail(percentage[i], st[i].marks));
    fprintf(p, "\n");

    fclose(p); // Close the file
}
}

const char *passOrFail(float percentage, float marks[]) {
    return (percentage >= 32) && 
           (marks[0] >= 24 && marks[1] >= 24 && marks[2] >= 24 && 
            marks[3] >= 24 && marks[4] >= 24) ? "Pass" : "Fail";
}

