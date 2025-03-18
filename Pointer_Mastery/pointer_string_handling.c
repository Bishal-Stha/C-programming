// #include<stdio.h>
// int main()
// {
//     char names[] = {'B','I','S','H','A','L'};

//     int*p = names;
//     for(int i=0; i<7; i++){
//         printf("%c\n",*(p+i));
//     }
// }



#include <stdio.h>
int main () {
char *names[] = {
"Zara Ali",
"Hina Ali",
"Nuha Ali",
"Sara Ali"
};
int i = 0;
for ( i = 0; i < 4; i++) {
printf("Value of names[%d] = %s\n", i, names[i] );
}
return 0;
}
