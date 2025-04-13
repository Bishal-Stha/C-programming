#include <stdio.h>
int main () {
int var;
int *ptr;
int **pptr;
var = 3000;
/* take the address of var */
ptr = &var;
/* take the address of ptr using address of operator & */
pptr = &ptr;
// printf("Address of var: %d\n",&var);
// printf("Address of ptr: %d\ns",&ptr); 
// printf("Address of pptr: %d",&pptr);

// /* take the value using pptr */
// printf("Value of var = %d\n", var );
// printf("Value available at *ptr = %d\n", *ptr );
// printf("Value available at **pptr = %d\n", **pptr);

// printf("Address of ptr: %d\n",pptr);
// printf("Value of ptr %d\n",*pptr);

printf("address of ptr: %d\n",*ptr);
printf("address of ptr: %d\n",**pptr);

return 0;
}
