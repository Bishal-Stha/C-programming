#include<stdio.h>
int main()
{
    int a = 10;
    int b = 15;
    int max;
    //condition ? expression if correct: expression if false.
    max = a>b ? a:b; 
    printf("%d is max.\n",max);

    (a%2==0) ? printf("%d is even.",a) : printf("%d is odd.",a);

    // char canVote[3];
    int age =16;

    char *canVote = (age >=18) ?"Yes" : "No";
    printf("\n%s\n",canVote);

    printf("%s\n", (b % 2 == 0) ? "Even" : "Odd"); //this works.
    

}