#include <stdio.h>

int main() {
    int a[10][10], n, i, j, isDiagonal = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++) {
            if(i != j && a[i][j] != 0) {
                isDiagonal = 0;
                break;
            }
        }

    if(isDiagonal)
        printf("The matrix is a diagonal matrix.\n");
    else
        printf("The matrix is NOT a diagonal matrix.\n");

    return 0;
}
