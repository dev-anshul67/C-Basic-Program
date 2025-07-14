#include <stdio.h>

int isSparseMatrix(int mat[3][3]) {
    int zeroCount = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (mat[i][j] == 0)
                zeroCount++;

    return (zeroCount > (3 * 3) / 2); // more than half elements are zero
}

int main() {
    int mat[3][3];
    printf("Enter 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    if (isSparseMatrix(mat))
        printf("It is a Sparse Matrix\n");
    else
        printf("It is NOT a Sparse Matrix\n");
    return 0;
}
 