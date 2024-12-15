#include <stdio.h>

// Recursive function to calculate Fibonacci number
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: 0th Fibonacci number is 0
    } else if (n == 1) {
        return 1; // Base case: 1st Fibonacci number is 1
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}

int main() {
    int terms;

    printf("Enter the number of terms for the Fibonacci sequence: ");
    scanf("%d", &terms);

    printf("Fibonacci sequence up to %d terms:\n", terms);
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i)); // Call recursive function
    }
    printf("\n");

    return 0;
}
