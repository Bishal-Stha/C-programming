#include<stdio.h>
struct Book {
    char title[30];
    char author[20];
    int price;
}b;

void DisplayStructure(struct Book *b);

int main()
{

    printf("Enter title, author name and price of the book\n");
    scanf(" %[^\n]",b.title);
    getchar();
    scanf(" %[^\n]",b.author);
    getchar();
    scanf("%d",&b.price);
    // scanf(" %s",);

   DisplayStructure(&b);
   return 0;
}
void DisplayStructure(struct Book *b)
{
    
        printf("Title: %s\n",(b->title));
        printf("Author: %s\n",w(b->author));
        printf("Price: %d\n",(b->price));
        printf("\n");
}