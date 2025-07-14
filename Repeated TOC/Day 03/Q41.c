#include <stdio.h>

int diagonalSum(int a[10][10], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i][i];
    return sum;
}

int main() {
    int a[10][10], n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal sum: %d\n", diagonalSum(a, n));
    return 0;
}
