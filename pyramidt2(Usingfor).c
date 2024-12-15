#include<stdio.h> // header file
int main(){ // entry point of the program
    int i, j, rows, spaces; // declaration of memory variables 
    printf("Enter the no. of rows\n"); 
    scanf("%d", &rows); // taking the input as value and addressing the value towards to variable "rows"

    for(i = 0; i <= rows; i++){ // conditional statement, assignment operator , relational operator(both) 
        for(spaces = 1; spaces <= rows - i; spaces++){ // same as above, - is mathmatical operator 
            printf(" "); // to print spaces
        }
        for(j = 1; j <= (2 * i - 1); j++){ //  
            printf("*"); // to print stars
        }
        printf("\n"); // to get next line 
    }
    return 0;  // End point of the program
}