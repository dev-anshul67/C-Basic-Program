#include <stdio.h>

int removeDuplicates(int arr[], int n)
{

    int temp[100];

    int i, j, k = 0;

    for (i = 0; i < n; i++)
    {

        int isDuplicate = 0;

        for (j = 0; j < k; j++)
        {

            if (arr[i] == temp[j])
            {

                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate)
        {

            temp[k] = arr[i];
            k++;
        }
    }
    for (i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }

    return k;
}

int main()
{

    int arr[100], n, i, newSize;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    newSize = removeDuplicates(arr, n);

    printf("Array after removing duplicates: \n");

    for (i = 0; i < newSize; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}