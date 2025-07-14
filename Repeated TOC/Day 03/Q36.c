#include <stdio.h>

int secondLargest(int arr[], int n) {
    int max = -99999, second = -99999;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        } else if (arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int arr[] = {10, 20, 5, 25, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Second largest: %d\n", secondLargest(arr, n));
    return 0;
}
