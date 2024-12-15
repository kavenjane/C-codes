#include <stdio.h>

int main() {
    int i, j, rows; // Declare variables

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows); // Store the user input in the 'rows' variable

    // Outer loop for rows
    for (i = 1; i <= rows; i++) {
        // Print spaces and stars in one loop
        for (j = 1; j <= rows + i - 1; j++) {
            if (j <= rows - i) {
                printf(" "); // Print spaces for alignment
            } else {
                printf("*"); // Print stars for the pyramid
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0; // End the program
}
