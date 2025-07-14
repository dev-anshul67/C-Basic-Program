#include <stdio.h>

int secondSmallest(int arr[], int n) {
    int min = 99999, second = 99999;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            second = min;
            min = arr[i];
        } else if (arr[i] < second && arr[i] != min) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[] = {10, 20, 5, 25, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Second smallest: %d\n", secondSmallest(arr, n));
    return 0;
}
