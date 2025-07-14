#include <stdio.h>

int main() {
    int a, d, n, sum;
    printf("Enter first term (a), common difference (d), and number of terms (n): ");
    scanf("%d %d %d", &a, &d, &n);
    sum = (n * (2 * a + (n - 1) * d)) / 2;
    printf("Sum = %d\n", sum);
    return 0;
}
