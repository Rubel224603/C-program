
#include <graphics.h>
#include <conio.h>

int main() {
    // Graphics mode initialization
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set background color to white
    setbkcolor(WHITE);
    cleardevice();

    // Set the color to green for the flag's background
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);

    // Draw the flag's green rectangle (flag of Bangladesh proportions)
    rectangle(150, 100, 450, 300); // A rectangle of width 300 and height 200
    floodfill(151, 101, GREEN);

    // Set the color to red for the circle (the sun)
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);

    // Draw the red circle (the sun) in the center-left of the flag
    fillellipse(300, 200, 50, 50); // Circle with center (300, 200) and radius 50

    // Display the result
    getch();

    // Close the graphics mode
    closegraph();
    return 0;
}
