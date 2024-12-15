#include<stdio.h>
int main(){
    int num1, num2, quotient;
    printf("Enter Divisor and Dividend : ");
    scanf("%d %d", &num1, &num2);
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
    }
        if(num1 % num2 == 0){
        quotient = num1/num2;
        printf("Divisble, The quotient is %d\n", quotient);
        } else{
        printf("Not Divisible\n");
        }
    return 0;
}