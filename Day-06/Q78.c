#include <stdio.h>

int isIdentityMatrix(int matrix[10][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j && matrix[i][j] != 1) {
                return 0; 
            }
            else if (i != j && matrix[i][j] != 0) {
                return 0; 
            }
        }
    }
    return 1; 
}

int main() {
    int matrix[10][10], size;

    printf("Enter the size of square matrix: ");
    scanf("%d", &size);

    printf("Enter elements of %dx%d matrix:\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isIdentityMatrix(matrix, size)) {
        printf("The matrix is an Identity Matrix.\n");
    } else {
        printf("The matrix is NOT an Identity Matrix.\n");
    }

    return 0;
}
