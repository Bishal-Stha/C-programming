// Call by value.

#include<stdio.h>
#include<string.h> 

//Define a structure
struct Student_details{
    char std_name[20];
    int roll_no;
    float percentage;    
};

void display(struct Student_details std[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Student %d\n",i+1);
        printf("Student name: %s\n",std[i].std_name);
        printf("Roll no: %d\n",std[i].roll_no);
        printf("Percentage: %.2f\n",std[i].percentage);
        printf("\n");
    }
}



int main()
{
    struct Student_details st1[3];

    strcpy(st1[0].std_name,"Bishal Shrestha");
    st1[0].roll_no = 8;
    st1[0].percentage =95.53;

    strcpy(st1[1].std_name,"John Doe");
    st1[1].roll_no = 83;
    st1[1].percentage =35.35;

    strcpy(st1[2].std_name,"Sagar Dhakal");
    st1[2].roll_no = 18;
    st1[2].percentage =65.36;

    display(st1,(sizeof(st1)/sizeof(st1[0])));
}

