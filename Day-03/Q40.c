#include <stdio.h>

int main()
{
    int arr[100], n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
