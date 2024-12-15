#include <stdio.h>

int main() {
    int i, j; // Declare loop variables

    // Outer loop for rows
    for (i = 1; i <= 5; i++) {
        // Inner loop for printing stars
        for (j = 1; j <= i; j++) {
            printf("*"); // Print a star
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0; // End the program
}
