#include <stdio.h>
void main() {
    char name[] = "IIT";
    int i = 0;
    while(name[i] != '\0') { // Corrected condition and removed semicolon
        printf("%c", name[i]); // Print the current character
        i++; // Move to the next character
    }
}
