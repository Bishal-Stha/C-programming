#include<stdio.h>
// Function to modify the value of a variable
int modifyValue(int *p, int *q){
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;
}

int main() {
    int value = 10;
    int value2 = 20;
    printf("Before function call: %d %d\n", value,value2);

    // Passing address of value to the function
    modifyValue(&value, &value2);

    printf("After function call: %d %d\n", value,value2);

    return 0;
}

