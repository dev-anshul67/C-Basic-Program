#include <stdio.h>

int main() {
    int a[] = {1, 3, 5}, b[] = {2, 4, 6};
    int m = 3, n = 3, i = 0, j = 0, k = 0;
    int c[10];

    while (i < m && j < n) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < m)
        c[k++] = a[i++];
    while (j < n)
        c[k++] = b[j++];

    printf("Merged array: ");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}
