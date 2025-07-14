#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    int temp[n];
    for (int i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, k = 2;

    rotateRight(arr, n, k);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
