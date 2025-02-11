#include<stdio.h>
void increment(int *n) {
    (*n)++;
}

int main()
{
	int age = 10;
	int age2 = 20;
	int *p = &age;
	int *q = &age2;

	printf("p stores %d & q stores %d\n",*p,*q);
	//Swapping values without third variable using pointers.
	*p = *p + *q; // p = 10+20 = 30
	*q = *p - *q; // q = 30-20 = 10
	*p = *p - *q; // p = 30-10 = 20
	printf("p stores %d & q stores %d",*p,*q);
	increment(&age);
	
	
}
