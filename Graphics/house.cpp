#include<stdio.h>
#include <graphics.h>
#include <conio.h>

int main() {
    int x =50;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\TURBOC3\\BGI");
    // Draw the house walls (rectangle)
    
    rectangle(150, 200, 300, 350);
    // Draw the roof (triangle)
    line(150, 200, 225, 100); // Left roof slope
    line(225, 100, 300, 200); // Right roof slope
    // Draw the door (smaller rectangle)
    rectangle(200, 270, 250, 350);


   for(int i=0; i<5; i++){
     // human2
     setcolor(3*i-1);
     circle((450-50)+(i*x),250,20);//head
     line((450-50)+(i*x),270,(450-50)+(i*x),330);//body
     line((420-50)+(i*x),290, (480-50)+(i*x),290);//arms
     line((430-50)+(i*x),350,(450-50)+(i*x),330);//leg1
     line((450-50)+(i*x),330,(470-50)+(i*x),350);//leg1
   }
    getch(); // Wait for user input
    closegraph(); // Close graphics mode
    return 0;
}



    // // human1
    // circle(450,250,20);//head
    // line(450,270,450,330);//body
    // line(420,290, 480,290);//arms
    // line(430,350,450,330);//leg1
    // line(450,330,470,350);//leg1