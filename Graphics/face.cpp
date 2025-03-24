#include <graphics.h>
#include<conio.h>

int main(){
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"");
    line(55,105,130,5);//l1 its nothing. 55,105 is where plotting begins and 130,5 is where plotting ends. first is x-axis and second is y.
    line(130,5,205,105);//l2
    rectangle(55,105,205,255);//b1
    rectangle(105,155,155,255);//b2
    getch();
    closegraph();
}