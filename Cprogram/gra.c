#include<stdio.h>
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw a simple circle
    circle(250, 250, 100);

    getch();
    closegraph();
    return 0;
}
