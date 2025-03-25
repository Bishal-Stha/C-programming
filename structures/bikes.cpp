#include<stdio.h>
typedef struct bikes
{
    char brand[30];
    char model[30];
    float price;
    int released_Year;
}bikes;

int main()
{
bikes bike1;

printf("Enter the details of bike1\n");
printf("Enter the brand name: ");
scanf("%s",&bike1.brand);

printf("Enter the model name: ");
scanf("%s",&bike1.model);

printf("Enter the price: ");
scanf("%s",&bike1.price);

printf("Enter the released year: ");
scanf("%s",&bike1.released_Year);

printf("\n");

printf("Bike 1 Details\n");
printf("Brand: %s\nModel: %s\nPrice: %.2f\nReleased Year: %d\n",bike1.model,bike1.brand,bike1.price,bike1.released_Year);

}