#include <stdio.h>
#include <string.h>
int main(){
    char string1[] = "Jerry";
    char string2[] = "Ferry";
    int i, j, k;
    i = strcmp(string1, "Jerry");
    j = strcmp(string1, string2);
    k = strcmp(string1, "Jerrybody");
    printf("\n%d %d %d %d", i, j, k);
    return 0;
}