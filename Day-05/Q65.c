#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int arr[] = {7, 2, 1, 10, 4};
    int k = 3;
    int n = 5;

    qsort(arr, n, sizeof(int), compare);
    printf("The %dth smallest element is %d", k, arr[k - 1]);
    return 0;
}
