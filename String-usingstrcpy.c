#include<stdio.h>
#include<string.h>
int main(){
    char source[] = "Roopin";
    char target[20];
    strcpy(target, source);
    printf("\n Source String = %s", source);
    printf("\n Target String = %s", target);
    return 0;
}