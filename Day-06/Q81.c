#include <stdio.h>

int main() {
    int a[10][10], n, i, j, isLower = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < n; i++)
        for(j = i+1; j < n; j++)
            if(a[i][j] != 0)
                isLower = 0;

    if(isLower)
        printf("The matrix is a lower triangular matrix.\n");
    else
        printf("The matrix is NOT a lower triangular matrix.\n");

    return 0;
}
