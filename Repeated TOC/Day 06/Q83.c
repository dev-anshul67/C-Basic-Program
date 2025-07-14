#include <stdio.h>

void rowColumnSum(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += mat[i][j];
            colSum += mat[j][i];
        }
        printf("Row %d sum = %d, Column %d sum = %d\n", i, rowSum, i, colSum);
    }
}

int main() {
    int mat[3][3];
    printf("Enter 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    rowColumnSum(mat);
    return 0;
}
