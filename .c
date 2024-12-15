#include <graphics.h>  // Include graphics library
#include <conio.h>      // For getch()

void drawTrident(int x, int y) {
    // Draw the main line of the trident
    line(x, y, x, y - 200);  // Trident main body

    // Draw the three prongs of the trident
    line(x - 20, y - 150, x, y - 200);  // Left prong
    line(x + 20, y - 150, x, y - 200);  // Right prong

    // Draw the middle prong
    line(x, y - 150, x, y - 200);  // Middle prong

    // Draw the trident's base
    line(x - 40, y, x + 40, y);  // Base of the trident
}

int main() {
    int gd = DETECT, gm;

    // Initialize the graphics system
    initgraph(&gd, &gm, "");

    // Set background color to white
    setbkcolor(WHITE);
    cleardevice();

    // Set color for the trident (black)
    setcolor(BLACK);

    // Draw the trident at position (300, 400)
    drawTrident(300, 400);

    // Wait for the user to press any key
    getch();

    // Close the graphics mode and return to text mode
    closegraph();

    return 0;
}
