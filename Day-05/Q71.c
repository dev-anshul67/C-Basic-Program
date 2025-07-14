#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4}, b[] = {2, 4};
    int n = 4, m = 2;

    printf("Difference (A - B): ");
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                found = 1;
                break;
            }
        }
        if (!found)
            printf("%d ", a[i]);
    }
    return 0;
}
