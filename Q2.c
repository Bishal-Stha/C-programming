/*
Differentiate between source code and object code. Create a structure named Book with members Book_Name, Price and Author_Name, then take input for 10 records of Book and print the name of authors having the price of book greater than 1000.
*/

#include<stdio.h>
struct Book {
    char Book_Name[30];
    float Price;
    char Author_Name[30];
}b[10];

int main()
{
    int n=1;
    printf("Enter the records\n");
    for(int i=0; i<n; i++){
        printf("Enter Name of Book%d: ",i+1);
        scanf(" %[^\n]",b[i].Book_Name);
        printf("Enter Price of Book%d: ",i+1);
        scanf(" %f",&b[i].Price);
        printf("Enter Author Name of Book%d: ",i+1);
        scanf(" %[^\n]",b[i].Author_Name);
    }

    printf("\n");

    for(int i=0; i<n; i++){
        if(b[i].Price > 1000){
            printf("Title: %s\n",b[i].Book_Name);
            printf("Author: %s\n",b[i].Author_Name);
            printf("Price: %.2f\n\n",b[i].Price);
        }
    }
}