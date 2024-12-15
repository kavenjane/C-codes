#include<stdio.h>
int main() {
    int i, j, m, n, a[10][10], b[10][10];

    printf("Enter the rows and columns: ");
    scanf("%d%d", &m, &n);

    // Input the elements of the matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter a value: ");
            scanf("%d", &a[i][j]);
        }
    }

    // Display the original matrix
    printf("The Original Matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n"); // Add a line break after each row
    }

    // Transpose the matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            b[j][i] = a[i][j];
        }
    }

    // Display the transpose matrix
    printf("The Transpose of Matrix:\n");
    for (i = 0; i < n; i++) { // Note: Rows and columns are swapped
        for (j = 0; j < m; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n"); // Add a line break after each row
    }

    return 0;
}
