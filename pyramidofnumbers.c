#include<stdio.h>
int main(){
    int rows;

    printf("Enter the no. of rows\n");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++){
        for(int space = 1; space <= rows - i; space++){
            printf(" ");
        }
        for(int j = 1; j <= (2 * i - 1 ); j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}