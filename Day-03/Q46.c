#include <stdio.h>

int main() {
    int a[10][10], r, i, j, flag = 1;

    printf("Enter the size of square matrix: ");
    scanf("%d", &r);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < r; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r; i++) {
        for(j = 0; j < r; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}
