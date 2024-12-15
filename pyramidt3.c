#include <stdio.h>

int main() {
    int rows; // Number of rows to be entered by the user
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) { // Loop through rows
        // Print spaces to center the numbers
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print the repeated number
        for (int num = 1; num <= (2 * i - 1); num++) {
            printf("%d", i);
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
