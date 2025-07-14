#include <stdio.h>

int isDiagonalMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (i != j && mat[i][j] != 0)
                return 0;
    return 1;
}

int main() {
    int mat[3][3];
    printf("Enter 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    if (isDiagonalMatrix(mat))
        printf("It is a Diagonal Matrix\n");
    else
        printf("It is NOT a Diagonal Matrix\n");
    return 0;
}
