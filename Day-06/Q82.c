#include <stdio.h>

int main() {
    int a[10][10], rows, cols, i, j, zeroCount = 0;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0)
                zeroCount++;
        }

    if(zeroCount > (rows * cols) / 2)
        printf("The matrix is a sparse matrix.\n");
    else
        printf("The matrix is NOT a sparse matrix.\n");

    return 0;
}
