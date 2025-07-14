#include <stdio.h>

void subtractMatrix(int a[2][2], int b[2][2], int result[2][2])
{
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            result[i][j] = a[i][j] - b[i][j];
}

void display(int mat[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int main()
{
    int a[2][2] = {{5, 6}, {7, 8}};
    int b[2][2] = {{1, 2}, {3, 4}};
    int result[2][2];
    subtractMatrix(a, b, result);
    printf("Difference of matrices:\n");
    display(result);
    return 0;
}
