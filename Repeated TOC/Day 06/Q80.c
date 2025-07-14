#include <stdio.h>

int isUpperTriangular(int mat[3][3]) {
    for (int i = 1; i < 3; i++)
        for (int j = 0; j < i; j++)
            if (mat[i][j] != 0)
                return 0;
    return 1;
}

int main() {
    int mat[3][3];
    printf("Enter 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    if (isUpperTriangular(mat))
        printf("It is an Upper Triangular Matrix\n");
    else
        printf("It is NOT an Upper Triangular Matrix\n");
    return 0;
}
