#include <stdio.h>
#include <string.h>
int main(){
    int i = 0, j = 1;
    char s[10];
    printf("Enter a string :");
    scanf("%s", &s);
    while(s[i] != '\0'){
        i++;
    }
    printf("Reverse of string is :");
    for(j = i - 1; j >= 0; j--){
        printf("%c", s[j]);
    }
    return 0;
}