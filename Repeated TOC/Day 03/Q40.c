#include <stdio.h>

void deleteElement(int arr[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++)
        arr[i] = arr[i + 1];
    (*n)--;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5, pos = 2;
    deleteElement(arr, &n, pos);
    printf("After deletion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
