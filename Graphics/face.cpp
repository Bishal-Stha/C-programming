#include <graphics.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14159265

void drawSpiralGalaxy(int centerX, int centerY, int maxRadius) {
    int color = 1;
    for (int angle = 0; angle < 360 * 5; angle += 5) { // 5 loops
        double radian = angle * (PI / 180.0);
        int radius = maxRadius * angle / (360 * 5); // Gradually increase radius
        int x = centerX + (int)(radius * cos(radian));
        int y = centerY + (int)(radius * sin(radian));

        putpixel(x, y, color % 15 + 1); // Cycle through colors
        color++;
        delay(10); // Slow the animation slightly
    }
}

void drawStars(int numStars, int width, int height) {
    for (int i = 0; i < numStars; i++) {
        int x = rand() % width;
        int y = rand() % height;
        int color = rand() % 15 + 1;
        putpixel(x, y, color);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int width = getmaxx();
    int height = getmaxy();

    // Draw background stars
    drawStars(500, width, height);

    // Draw the spiral galaxy
    int centerX = width / 2;
    int centerY = height / 2;
    drawSpiralGalaxy(centerX, centerY, 200);

    // Add some extra sparkles
    drawStars(300, width, height);

    getch(); // Wait for a key press
    closegraph(); // Close the graphics window
    return 0;
}
