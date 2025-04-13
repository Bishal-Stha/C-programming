#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"c:/tc/bgi");
    // rectangle(10,100,300,300);
    circle(200,200,200);
    getch();
    closegraph();
    return 0;
}