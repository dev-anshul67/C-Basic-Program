#include <stdio.h>

int main() {
    int a[] = {1, 2, 3}, b[] = {3, 4, 5};
    int n = 3, m = 3;

    printf("Union: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    for (int i = 0; i < m; i++) {
        int found = 0;
        for (int j = 0; j < n; j++) {
            if (b[i] == a[j]) {
                found = 1;
                break;
            }
        }
        if (!found)
            printf("%d ", b[i]);
    }
    return 0;
}
