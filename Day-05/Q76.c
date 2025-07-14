#include <stdio.h>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    printf("Determinant = %d", det);
    return 0;
}
