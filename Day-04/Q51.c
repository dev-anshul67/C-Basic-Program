#include <stdio.h>
#include <math.h>

int main() {
    int a, r, n;
    float sum;
    printf("Enter first term (a), common ratio (r), and number of terms (n): ");
    scanf("%d %d %d", &a, &r, &n);

    if (r == 1)
        sum = a * n;
    else
        sum = a * (1 - pow(r, n)) / (1 - r);

    printf("Sum = %.2f\n", sum);
    return 0;
}
