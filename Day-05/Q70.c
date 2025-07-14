#include <stdio.h>

int main() {
    int a[] = {1, 2, 3}, b[] = {3, 4, 5};
    int n = 3, m = 3;

    printf("Intersection: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j])
                printf("%d ", a[i]);
        }
    }
    return 0;
}
