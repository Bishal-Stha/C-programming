#include <stdio.h>
#include <string.h>
#define PI 3.1415


struct Book {
    char author[20];
    int page;
    float price;
} b,bb;

int main() {
    // Assigning values
    strcpy(b.author, "Bishal");
    b.page = 500;
    b.price = 350.0*PI;

    strcpy(bb.author, "Bibek");
    bb.page = 500;
    bb.price = 600;

    // Writing to file
    FILE *ptr = fopen("Pustak.txt", "w");
    if (ptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(ptr, "%s %d %.2f ", b.author, b.page, b.price);
    fprintf(ptr, "%s %d %.2f ", bb.author, bb.page, bb.price);
    fclose(ptr);

    // Reading from file
    char str[20];
    int page;
    float price;

    ptr = fopen("Pustak.txt", "r");
    if (ptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    while((fscanf(ptr, "%s %d %f", str, &page, &price))!=EOF){
        if(price >400)
        printf("\nBook Author: %s\nBook Page: %d\nBook Price: %.2f\n", str, page, price);
    }
    fclose(ptr);
    return 0;
}
