#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    int temp[100], index = 0;
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < index; j++) {
            if (arr[i] == temp[j])
                break;
        }
        if (j == index)
            temp[index++] = arr[i];
    }

    for (int i = 0; i < index; i++)
        arr[i] = temp[i];

    return index;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    n = removeDuplicates(arr, n);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
