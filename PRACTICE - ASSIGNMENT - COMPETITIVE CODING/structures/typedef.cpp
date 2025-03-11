#include<stdio.h>

typedef struct Distance 
{
    int feet;
    float inch;
}dist;

int main()
{
    dist meter,km;
    meter.feet = 10;
    meter.inch = 20.75;

    km.feet = 100;
    km.inch = 205.75;

    printf("Meter\n");
    printf("%d and %f",meter.feet, meter.inch);

    printf("Km\n");
    printf("%d and %f",km.feet, km.inch);

    printf("\n");

    typedef float Float;
     Float a= 10.4;
    printf("%f",a);

    return 0;

}