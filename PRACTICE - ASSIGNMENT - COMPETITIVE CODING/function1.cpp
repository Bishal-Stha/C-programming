#include<stdio.h>
char yourName(char name[]);
int main(){
    char name[] = "Bishal Shrestha";
yourName(name);
}
char yourName(char name[]){
    printf("Welcome %s",name);
}