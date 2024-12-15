#include<stdio.h> // Include the standard input/output library for printf and scanf

int main() { // Entry point of the program
    int i, j, rows, spaces; // Variable declarations: 
                            // i = row index, j = star index, rows = user input for number of rows, spaces = space counter

    // Prompt the user to enter the number of rows
    printf("Enter the No. of Rows\n");
    scanf("%d", &rows); // Read user input for the number of rows

    // Outer loop to control the number of rows
    for(i = 1; i <= rows; i++) {
        // Inner loop to print spaces for center alignment
        for(spaces = 1; spaces <= rows - i; spaces++) {
            printf(" "); // Print spaces to center-align the stars
        }
        // Inner loop to print stars in each row
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*"); // Print a star
        }
        printf("\n"); // Move to the next line after printing stars for a row
    }

    return 0; // End of the program, return 0 indicates successful execution
}
