#include <stdio.h>

void rotateRight(int arr[], int n, int k)
{
    k %= n;
    int temp[100];
    for (int i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int k = 2;
    rotateRight(arr, 5, k);
    display(arr, 5);
    return 0;
}
