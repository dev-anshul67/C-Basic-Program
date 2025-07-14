#include <stdio.h>

void findSaddlePoint(int mat[3][3]) {
    int found = 0;
    for (int i = 0; i < 3; i++) {
        int min = mat[i][0], colIndex = 0;
        for (int j = 1; j < 3; j++) {
            if (mat[i][j] < min) {
                min = mat[i][j];
                colIndex = j;
            }
        }

        int isSaddle = 1;
        for (int k = 0; k < 3; k++) {
            if (mat[k][colIndex] > min) {
                isSaddle = 0;
                break;
            }
        }

        if (isSaddle) {
            printf("Saddle point is %d at position (%d, %d)\n", min, i, colIndex);
            found = 1;
        }
    }
    if (!found)
        printf("No Saddle Point Found\n");
}

int main() {
    int mat[3][3];
    printf("Enter 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    findSaddlePoint(mat);
    return 0;
}
