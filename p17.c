#include <stdio.h>

#define ROWS 2
#define COLS 2

void readMatrix(int matrix[ROWS][COLS]) {
    int i, j;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int a[ROWS][COLS], int b[ROWS][COLS], int sum[ROWS][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrix(int a[ROWS][COLS], int b[ROWS][COLS], int product[ROWS][COLS]) {
    int i, j, k;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            product[i][j] = 0;
            for (k = 0; k < COLS; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[ROWS][COLS], b[ROWS][COLS], sum[ROWS][COLS], product[ROWS][COLS];

    printf("Enter the first matrix:\n");
    readMatrix(a);
    printf("Enter the second matrix:\n");
    readMatrix(b);

    addMatrix(a, b, sum);
    printf("The sum of the matrices is:\n");
    printMatrix(sum);

    multiplyMatrix(a, b, product);
    printf("The product of the matrices is:\n");
    printMatrix(product);

    return 0;
}
