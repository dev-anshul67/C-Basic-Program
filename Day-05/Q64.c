#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return binarySearch(arr, low, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, high, key);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int key = 5;
    int n = 5;
    int result = binarySearch(arr, 0, n - 1, key);
    if (result == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", result);
    return 0;
}
