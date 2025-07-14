#include <stdio.h>

int main() {
    int a[10][10], n, i, j, isUpper = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 1; i < n; i++)
        for(j = 0; j < i; j++)
            if(a[i][j] != 0)
                isUpper = 0;

    if(isUpper)
        printf("The matrix is an upper triangular matrix.\n");
    else
        printf("The matrix is NOT an upper triangular matrix.\n");

    return 0;
}
