#include <stdio.h>

int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) \ 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
int main()
{
    int arr[100], n, key, index;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: \n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the elements to search: ");
    scanf("%d", &key);

    index = binarySearch(arr, n, key);

    if (index != -1)
        printf("Element found at index: %d\n", index);

    else
        printf("Elements not found in the array. \n");
    return 0;
}