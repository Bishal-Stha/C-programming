#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    // Initialize the graphics system
    initgraph(&gd, &gm, (char*)"C:\\TURBOC3\\BGI");

    // Draw a circle
    circle(200, 200, 100);

    // Wait for user input to close
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}
