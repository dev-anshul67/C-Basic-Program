#include <stdio.h>

void insertElement(int arr[], int *n, int pos, int value) {
    for (int i = *n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = value;
    (*n)++;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5}, n = 5, pos = 2, val = 99;
    insertElement(arr, &n, pos, val);
    printf("After insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
