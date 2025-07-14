#include <stdio.h>

int findLCM(int a, int b) {
    int max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0)
            return max;
        max++;
    }
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("LCM = %d\n", findLCM(a, b));
    return 0;
}
