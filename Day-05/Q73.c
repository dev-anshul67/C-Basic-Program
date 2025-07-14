#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4}, b[] = {2, 3, 5};
    int n = 4, m = 3;

    printf("Common elements: ");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i] == b[j])
                printf("%d ", a[i]);
    return 0;
}
