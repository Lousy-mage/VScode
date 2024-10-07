#include <stdio.h>

int row1, col1;
int mat1[100][100];
int row2, col2;
int mat2[100][100];

void getMatrices() {
    printf("Enter rows and columns of matrix 1: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter rows and columns of matrix 2: ");
    scanf("%d %d", &row2, &col2);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
}

void sumArr() {
    if (row1 != row2 || col1 != col2) {
        printf("Matrices must have the same dimensions for addition.\n");
        return;
    }

    int result[100][100];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Sum of the matrices:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void mulArr() {
    if (col1 != row2) {
        printf("Number of columns in matrix 1 must equal the number of rows in matrix 2 for multiplication.\n");
        return;
    }

    int result[100][100];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
void options();
int main() {
    getMatrices();
    options();
    return 0;
}
void options(){
    printf("choose operation:\n");
    printf("[1] addition\n");
    printf("[2] multiplication\n");

    int opt;
    scanf(" %c",&opt);

    switch (opt)
    {
    case '1':
        sumArr();
        break;
    case '2':
        mulArr();
        break;
    default:
        printf("Invalid option!\n");
        return;
    }
}