#include <graphics.h>
#include <conio.h>

int main() {
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set color to blue
    setcolor(BLUE);

    // Draw a circle with center at (200, 200) and radius 100
    circle(200, 200, 100);

    // Hold the screen until a key is pressed
    getch();

    // Close the graphics mode
    closegraph();
    return 0;
}
