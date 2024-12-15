#include <stdio.h>

int main() {
    int a, b, c; // Declare three integer variables to store user input

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c); // Read the three numbers from user input

    // Compare the numbers to find the largest
    if (a > b) { // Check if 'a' is greater than 'b'
        if (a > c) { // If true, check if 'a' is also greater than 'c'
            printf("Largest: %d", a); // If 'a' is greater than both 'b' and 'c', print 'a'
        } else {
            printf("Largest: %d", c); // If 'c' is greater than 'a', print 'c'
        }
    } else { // If 'a' is not greater than 'b', then 'b' is greater or equal to 'a'
        if (b > c) { // Check if 'b' is greater than 'c'
            printf("Largest: %d", b); // If true, print 'b'
        } else {
            printf("Largest: %d", c); // If 'c' is greater than or equal to 'b', print 'c'
        }
    }

    return 0; // End the program
}
