#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}

int main() {
    int arr[100], n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);
    sort(arr, n);
    printf("%dth largest = %d\n", k, arr[k-1]);
    return 0;
}
