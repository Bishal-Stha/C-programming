#include<stdio.h>
#include<string.h>
// #include<conio.h>
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


    //Value Assignment
    for(int i=0; i<n; i++){
        printf("Enter your Roll No: ");
        scanf("%d",&st[i].id);

        printf("Enter your name: ");
        scanf("%s", st[i].name);
        // fgets(st[i].name,sizeof(st[i].name),stdin);
        // gets(st[i].name);
        // getchar();

        printf("Enter your marks of following subjects\n");
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

printf("Roll No\t Name\t Physics Math\t C\t DL\t IT\t [%%]\t Status\n");
for(int i=0; i<n; i++){
    printf("%d\t %s\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f\t %s\n",st[i].id, st[i].name, st[i].marks[0],st[i].marks[1],st[i].marks[2],st[i].marks[3],st[i].marks[4],percentage[i],passOrFail(percentage[i],st[i].marks));
}
}

const char *passOrFail(float percentage, float marks[]) {
    return (percentage >= 32) && 
           (marks[0] >= 24 && marks[1] >= 24 && marks[2] >= 24 && 
            marks[3] >= 24 && marks[4] >= 24) ? "Pass" : "Fail";
}

