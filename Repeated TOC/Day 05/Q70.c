#include <stdio.h>

void intersection(int a[], int n, int b[], int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i] == b[j])
                printf("%d ", a[i]);
}

int main()
{
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    intersection(a, 3, b, 3);
    return 0;
}