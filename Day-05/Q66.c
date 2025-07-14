#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int arr[] = {7, 2, 1, 10, 4};
    int k = 2;
    int n = 5;

    qsort(arr, n, sizeof(int), compare);
    printf("The %dth largest element is %d", k, arr[k - 1]);
    return 0;
}
