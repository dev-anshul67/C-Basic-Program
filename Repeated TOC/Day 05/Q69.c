#include <stdio.h>

void unionArray(int a[], int n, int b[], int m)
{
    int unionArr[200], k = 0;
    for (int i = 0; i < n; i++)
        unionArr[k++] = a[i];
    for (int i = 0; i < m; i++)
    {
        int found = 0;
        for (int j = 0; j < n; j++)
            if (b[i] == a[j])
                found = 1;
        if (!found)
            unionArr[k++] = b[i];
    }
    for (int i = 0; i < k; i++)
        printf("%d ", unionArr[i]);
}

int main()
{
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    unionArray(a, 3, b, 3);
    return 0;
}
