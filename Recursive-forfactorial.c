#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) { // Base case: 0! = 1! = 1
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        printf("The factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
