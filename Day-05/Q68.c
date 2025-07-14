#include <stdio.h>

void rotateLeft(int arr[], int n, int k) {
    int temp[n];
    for (int i = 0; i < n; i++)
        temp[i] = arr[(i + k) % n];
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, k = 2;

    rotateLeft(arr, n, k);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
