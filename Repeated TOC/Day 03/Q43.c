#include <stdio.h>

void multiplyMatrices(int a[10][10], int b[10][10], int result[10][10], int n, int m, int p) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < m; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
}

int main() {
    int a[10][10], b[10][10], result[10][10];
    int n, m, p;
    printf("Enter rows and cols of A: ");
    scanf("%d%d", &n, &m);
    printf("Enter cols of B: ");
    scanf("%d", &p);

    printf("Enter matrix A:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    printf("Enter matrix B:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &b[i][j]);

    multiplyMatrices(a, b, result, n, m, p);

    printf("Result matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
    return 0;
}
