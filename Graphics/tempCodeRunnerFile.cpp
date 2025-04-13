#include<graphics.h>
#include<conio.h>
int main() {
int gd = DETECT, gm;
// initgraph(&gd,&gm,(char*)"C:\\TURBO3\\BGI");
initgraph(&gd, &gm, (char*)"C:\\TURBOC3\\BGI");
// setbkcolor(BLUE);
setcolor(RED);
circle (100,100,100);
setcolor(BLUE);
circle (100,200,100);
setcolor(YELLOW);
circle (100,300,100);
setcolor(GREEN);
circle (200,100,100);
setcolor(MAGENTA);
circle (200,200,100);
setcolor(BROWN);
circle (200,300,100);
setcolor(LIGHTGRAY);
circle (300,100,100);
setcolor(DARKGRAY);
circle (300,200,100);
setcolor(CYAN);
circle (300,300,100);
setcolor(LIGHTRED);
getch();
closegraph();
return 0;
}