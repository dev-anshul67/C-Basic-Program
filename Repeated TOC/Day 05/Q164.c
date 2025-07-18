#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            return binarySearch(arr, low, mid - 1, key);
        else
            return binarySearch(arr, mid + 1, high, key);
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int key = 5;
    int n = 5;
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        printf("Found at index %d\n", result);
    else
        printf("Not found\n");
    return 0;
}
