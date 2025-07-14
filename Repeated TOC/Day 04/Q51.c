#include <stdio.h>
#include <math.h>

double geometricSum(int a, int r, int n) {
    return a * (1 - pow(r, n)) / (1 - r);
}

int main() {
    int a, r, n;
    printf("Enter first term (a), common ratio (r), and number of terms (n): ");
    scanf("%d %d %d", &a, &r, &n);
    printf("Sum = %.2lf\n", geometricSum(a, r, n));
    return 0;
}
