#include <stdio.h>

int isIdentityMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0))
                return 0;
    return 1;
}

int main() {
    int mat[3][3];
    printf("Enter 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    if (isIdentityMatrix(mat))
        printf("It is an Identity Matrix\n");
    else
        printf("It is NOT an Identity Matrix\n");
    return 0;
}
