#include <stdio.h>

int main() {
    int rows, columns, i, j; // Declare variables

    // Prompt the user to enter the number of rows for the pyramid
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Calculate the total number of columns for the pyramid
    columns = 2 * rows - 1; // The base of the pyramid has `2 * rows - 1` stars

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for columns
        for (j = 1; j <= columns; j++) {
            // Print stars in the middle and spaces on both sides
            if (j >= rows - (i - 1) && j <= rows + (i - 1)) {
                printf("*"); // Print a star
            } else {
                printf(" "); // Print a space
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0; // End the program
}
