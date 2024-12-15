#include <stdio.h>
int main(){
    int m, n, i, j, a[10][10],b[10][10],c[10][10];
    printf("Enter the no. of rows and columns: ");
    scanf("%d%d", &m, &n);
    for(i = 0;i <= m - 1; i++){
        for(j = 0; j <= n - 1; j++){
            printf("Enter a value: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of 2nd Matrix\n");
    for(i = 0; i <= m - 1; i++){
        for(j = 0; j <= n - 1; j++){
            printf("Enter a value: ");
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i <= m - 1; i++){
        for(j = 0; j <= n - 1; j++){
            c[i][j] = a[i][j] + b[i][j] ;
        }
    }
    printf("The sum of Two matrices is:\n");
    for(i = 0; i <= m - 1; i++){
        for(j = 0; j <= n - 1; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}