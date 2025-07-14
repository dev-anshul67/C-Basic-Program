#include <stdio.h>

int main()
{
    int arr[100], n, i, min, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    min = second = 999999;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            second = min;
            min = arr[i];
        }
        else if (arr[i] < second && arr[i] != min)
        {
            second = arr[i];
        }
    }

    printf("Second smallest element: %d\n", second);
    return 0;
}
