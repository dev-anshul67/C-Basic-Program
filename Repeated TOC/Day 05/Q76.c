#include <stdio.h>

int determinant2x2(int mat[2][2]) {
    return (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
}

int main() {
    int mat[2][2] = {{4, 6}, {3, 8}};
    int det = determinant2x2(mat);
    printf("Determinant = %d\n", det);
    return 0;
}
