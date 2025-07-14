#include <stdio.h>

int reverse(int n, int rev) {
    if (n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);
}

int main() {
    int n, rev;
    printf("Enter a number: ");
    scanf("%d", &n);
    rev = reverse(n, 0);

    if (n == rev)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
