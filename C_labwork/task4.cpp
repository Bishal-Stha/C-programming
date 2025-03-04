#include<stdio.h>
#include<math.h>
float area(float radius);
float circum(float radius);
int main()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);
    float areaOfCircle = area(radius);
    float circumOfCircle = circum(radius);
    printf("The area of circle is %.2f",areaOfCircle);
    printf("The area of circle is %.2f",circumOfCircle);

    return 0;
}

float area(float radius){
    float area =  M_PI_2 * pow(radius,2);
    return area;
}

float circum(float radius){
    float  circum =  M_PI_2 * 2 * radius;
    return circum;
}