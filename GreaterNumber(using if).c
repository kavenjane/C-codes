#include <stdio.h> // Include standard input/output header file

int main() { // The entry point of function which is used to start the code
    int num1, num2; // Declare two integer variables to store the numbers

    // Prompt the user to enter two numbers
    printf("Enter two numbers:\n");
    scanf("%d%d", &num1, &num2); // Read the two numbers from the user

    // Check if the first number is greater than the second number
    if (num1 > num2) {  //( > - Relational Operator)
        printf("%d is Greater than %d\n", num1, num2); // Print that num1 is greater
    }

    // Check if the second number is greater than the first number
    if (num2 > num1) { 
        printf("%d is Greater than %d\n", num2, num1); // Print that num2 is greater
    }

    // Check if the two numbers are equal
    if (num1 == num2) { // The operator used is comparison Operator "=="
        printf("%d is Equal to %d\n", num1, num2); // Print that the numbers are equal
    }

    return 0; // End point of the program
}
