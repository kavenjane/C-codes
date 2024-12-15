#include <stdio.h>
#include <string.h>
int main(){
    char array[10] = "BamBook";
    int len1, len2;
    len1 = strlen(array);
    len2 = strlen("Humpty Dumpty");
    printf("\n String = %s length = %d", array, len1);
    printf("\n String = %s length = %d", "Humpty Dumpty", len2);
    return 0;
}