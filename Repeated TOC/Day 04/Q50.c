#include <stdio.h>

int arithmeticSum(int a, int d, int n) {
    return (n * (2 * a + (n - 1) * d)) / 2;
}

int main() {
    int a, d, n;
    printf("Enter first term (a), common difference (d), and number of terms (n): ");
    scanf("%d %d %d", &a, &d, &n);
    printf("Sum = %d\n", arithmeticSum(a, d, n));
    return 0;
}
