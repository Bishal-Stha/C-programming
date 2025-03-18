#include<stdio.h>

typedef enum gender {male, female, others}Gender;

int main()
{
    // Gender g1 = male;
    // printf("%d",g1);

    
    // printf("Enter your gender(1. male, 2. female, 3. others)");
    // int g;
    // scanf("%d",&g);


    // (g==0) ?printf("True"): printf("False");

    char options[2][4][20] = {
        {"3*10^8 m//s","3*10^5 m//s","3*10^10 m//s", "3*10-8 m//s"},
        {"3.146","3.149","3.141","3.140"}
    };

    printf("%s",options[1][3]);


}