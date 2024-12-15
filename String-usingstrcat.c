#include <stdio.h>
#include <string.h>
int main(){
    char source[] = " folks!";
    char target[30] = " Hello ";
    strcat(target, source);
    printf("\n source string = %s", source);
    printf("\n target string = %s", target);
    return 0;
}