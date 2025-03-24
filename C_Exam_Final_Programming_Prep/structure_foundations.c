#include<stdio.h>
#include<string.h>
struct planet {
    int satelites;
    float gravity;
    char *color;
};

//Passing Structure to function.
void displayStructResult(struct planet *p);

int main(){
    struct planet earth;
    strcpy(earth.color,"Blue");
    earth.gravity = 9.8;
    earth.satelites =1;
    displayStructResult(&earth);
}

void displayStructResult(struct planet *p){
    printf("Earth has %d satellites. It is %s in color and its gravity is %.2f m/s.\n",p->satelites, p->color,p->gravity);
}