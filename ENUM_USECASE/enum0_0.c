#include<stdio.h>
enum {Red, Blue, Yellow, Green, Orange};

int main()
{
    int favColor = Red;
    (favColor == Red) ? printf("Correct") : printf("Incorrect");
}