#include <stdio.h>

void subtractMatrices(int a[10][10], int b[10][10], int result[10][10], int n, int m) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            result[i][j] = a[i][j] - b[i][j];
}

int main() {
    int a[10][10], b[10][10], result[10][10], n, m;

    printf("Enter rows and columns: ");
    scanf("%d%d", &n, &m);

    printf("Enter matrix A:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    printf("Enter matrix B:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &b[i][j]);

    subtractMatrices(a, b, result, n, m);

    printf("Difference of matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
