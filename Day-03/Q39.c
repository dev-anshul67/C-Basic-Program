#include <stdio.h>

int main()
{
    int arr[100], n, i, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
