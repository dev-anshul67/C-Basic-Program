#include <stdio.h>

int main() {
    float a[2][2] = {{4, 7}, {2, 6}};
    float det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if (det == 0) {
        printf("Inverse doesn't exist");
        return 0;
    }

    float inv[2][2];
    inv[0][0] =  a[1][1]/det;
    inv[0][1] = -a[0][1]/det;
    inv[1][0] = -a[1][0]/det;
    inv[1][1] =  a[0][0]/det;

    printf("Inverse of matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%.2f ", inv[i][j]);
        printf("\n");
    }
    return 0;
}
