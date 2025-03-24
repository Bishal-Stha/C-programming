#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm,"");

    circle(300, 220, 200);

    getch();

    closegraph();

    return 0;
}
