#include <stdio.h>

int main() {
    int a[10][10], n, i, trace = 0;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++) {
        trace += a[i][i];
    }

    printf("Trace of the matrix = %d\n", trace);
    return 0;
}
