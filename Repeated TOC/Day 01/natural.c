#include <stdio.h>

int sumOfNaturalNumbers(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{

    int n, result;

    printf("Enter a positive integer: ");

    scanf("%d", &n);

    result = sumOfNaturalNumbers(n);

    printf("Sum is: %d\n", result);

    return 0;
}
