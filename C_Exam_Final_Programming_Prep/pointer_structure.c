#include<stdio.h>
#include<string.h>
struct Book {
    char author[20];
    int page;
    float price;
};

int main()
{
    struct Book *RDPD;
    strcpy(RDPD->author,"Robert Kiyosaki");
    RDPD->page = 340;
    RDPD->price = 690.99;

    printf("Yesterday i bought this famous book RICH DAD POOR DAD by %s. it has %d pages and cost me Rsr.%.2f",RDPD->author,RDPD->page,RDPD->price);
}