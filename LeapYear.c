#include <stdio.h>  // Standard input/output header file

int main() {
    int y;  // Declare variable 'y' to store the year entered by the user

    // Prompt the user to enter the year
    printf("Enter the year to check:\n ");
    scanf("%d", &y);  // Read the entered year into the variable 'y'

    // Start the if-else block to check whether the year is a leap year
    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) {
        // The first condition checks if the year is divisible by 4 AND not divisible by 100
        //    - (y % 4 == 0) checks if the year is divisible by 4 (basic condition for leap year)
        //    - (y % 100 != 0) ensures that century years (like 1900, 2100) are excluded unless they are divisible by 400
        // The second condition checks if the year is divisible by 400 (for century years like 1200, 1600, 2000)
        //    - (y % 400 == 0) checks if the year is divisible by 400
        // If either condition is true, the year is a leap year.

        printf("It is a leap year\n");  // Output if the year satisfies leap year conditions
    } else {
        // If neither of the conditions in the if statement is true, then it is not a leap year
        printf("It is not a leap year\n");  // Output if the year does not satisfy leap year conditions
    }

    return 0;  // End of the program
}
