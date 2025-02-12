/*
This is a function with both argument and return value.
Write a C program to calculate the area of circle making a function.
*/

#include<stdio.h>
#include<math.h>
#define PI 3.1415
float circleArea(float radius);

int main(){
float radius;
printf("Enter the radius of circle: ");
scanf("%f",&radius);

printf("The area of circle is %.2f squared metres\n",circleArea(radius));
}

float circleArea(float radius){
    float area = PI* pow(radius,2);
    return area;
}
