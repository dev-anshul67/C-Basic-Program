#include <stdio.h>

void findCommon(int a[], int n, int b[], int m)
{
    printf("Common elements: ");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i] == b[j])
                printf("%d ", a[i]);
}

int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};
    findCommon(a, 4, b, 4);
    return 0;
}