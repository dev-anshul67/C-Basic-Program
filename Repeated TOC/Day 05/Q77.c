#include <stdio.h>

void inverse2x2(int mat[2][2]) {
    int det = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);

    if (det == 0) {
        printf("Inverse not possible (det = 0)\n");
        return;
    }

    float inv[2][2];
    inv[0][0] = mat[1][1] / (float)det;
    inv[0][1] = -mat[0][1] / (float)det;
    inv[1][0] = -mat[1][0] / (float)det;
    inv[1][1] = mat[0][0] / (float)det;

    printf("Inverse matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++)
            printf("%.2f ", inv[i][j]);
        printf("\n");
    }
}

int main() {
    int mat[2][2] = {{4, 7}, {2, 6}};
    inverse2x2(mat);
    return 0;
}
