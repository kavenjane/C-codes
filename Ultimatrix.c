#include <stdio.h>

// Function to input a matrix
void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int r1, int c1, int matrix1[r1][c1], int r2, int c2, int matrix2[r2][c2], int result[r1][c2]) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0; // Initialize result matrix element to 0
            for (int k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Function to calculate transpose
void transposeMatrix(int rows, int cols, int matrix[rows][cols], int transpose[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int choice;

    printf("Matrix Calculator Options:\n");
    printf("1. Add Matrices\n");
    printf("2. Subtract Matrices\n");
    printf("3. Multiply Matrices\n");
    printf("4. Transpose a Matrix\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1 || choice == 2) {
        // Addition or Subtraction
        int rows, cols;
        printf("Enter the number of rows and columns for the matrices: ");
        scanf("%d%d", &rows, &cols);

        int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];
        printf("Matrix 1:\n");
        inputMatrix(rows, cols, matrix1);
        printf("Matrix 2:\n");
        inputMatrix(rows, cols, matrix2);

        if (choice == 1) {
            addMatrices(rows, cols, matrix1, matrix2, result);
            printf("Result of Addition:\n");
        } else {
            subtractMatrices(rows, cols, matrix1, matrix2, result);
            printf("Result of Subtraction:\n");
        }

        printMatrix(rows, cols, result);
    } else if (choice == 3) {
        // Multiplication
        int r1, c1, r2, c2;
        printf("Enter rows and columns for Matrix 1: ");
        scanf("%d%d", &r1, &c1);
        printf("Enter rows and columns for Matrix 2: ");
        scanf("%d%d", &r2, &c2);

        if (c1 != r2) {
            printf("Matrix multiplication not possible! Columns of Matrix 1 must equal rows of Matrix 2.\n");
            return 0;
        }

        int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];
        printf("Matrix 1:\n");
        inputMatrix(r1, c1, matrix1);
        printf("Matrix 2:\n");
        inputMatrix(r2, c2, matrix2);

        multiplyMatrices(r1, c1, matrix1, r2, c2, matrix2, result);
        printf("Result of Multiplication:\n");
        printMatrix(r1, c2, result);
    } else if (choice == 4) {
        // Transpose
        int rows, cols;
        printf("Enter the number of rows and columns for the matrix: ");
        scanf("%d%d", &rows, &cols);

        int matrix[rows][cols], result[cols][rows];
        inputMatrix(rows, cols, matrix);

        transposeMatrix(rows, cols, matrix, result);
        printf("Transpose of the Matrix:\n");
        printMatrix(cols, rows, result);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
