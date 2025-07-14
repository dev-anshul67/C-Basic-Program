#include <stdio.h>

int isSymmetric(int a[10][10], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] != a[j][i])
                return 0;
    return 1;
}

int main() {
    int a[10][10], n;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    if (isSymmetric(a, n))
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}
