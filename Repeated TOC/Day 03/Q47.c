#include <stdio.h>

int findTrace(int a[10][10], int n) {
    int trace = 0;
    for (int i = 0; i < n; i++)
        trace += a[i][i];
    return trace;
}

int main() {
    int a[10][10], n;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Trace of matrix: %d\n", findTrace(a, n));
    return 0;
}
