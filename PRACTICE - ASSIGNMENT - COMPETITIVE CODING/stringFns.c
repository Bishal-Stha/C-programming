#include<stdio.h>
#include<string.h>
int main()
{
    char input[20], input2[20];

    printf("Enter: ");
    scanf("%[^\n]", input); // Read the first string

    getchar(); // Consume the leftover newline character

    printf("\nEnter another: ");
    scanf("%[^\n]", input2); // Read the second string

    printf("%s", input);
    printf("\n%s", input2);

    return 0;
}
