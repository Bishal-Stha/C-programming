#include<stdio.h>
#include<string.h>

int main()
{
    char word[20];
    printf("Enter a word: ");
    gets(word);
    int n = strlen(word);

    char check[n];
    for(int i=0; i<n; i++){
        // printf("%c\t",word[i]);
        check[n-1-i] = word[i]; //n =3 check[3-1-i] => 2,1,0
    }
    check[n] ='\0';

    if(strcmp(word,check)==0)
    printf("Pallindrome.\n");
    else {
        printf("Not Pallindrome.");
    }

    // printf(" %s",check);
}