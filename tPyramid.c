#include <stdio.h>
int main() {
    int i, j;
    for (i = 0; i <= 5 ; i++) { // Corrected 'for' loop syntax
        for (j = 1; j <= i; j++) { // Corrected 'for' loop syntax
            printf("*"); // Added missing semicolon
        }
        printf("\n"); // Moved to the next line after each row
    }
    return 0;
}
