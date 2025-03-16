//Call by reference.

#include<stdio.h>
#include<string.h>
struct Bikes {
    char brandName[25];
    float price;
}bike1;

void Bike_ShowRoom(struct Bikes *b){
    printf("Brand Name: %s\n",b->brandName);
    printf("Price: %.2f",b->price);
}

int main()
{
    strcpy(bike1.brandName,"Hayabusa");
    bike1.price = 20000000;
    Bike_ShowRoom(&bike1);
}