#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    strcat(str1, str2);
    strcpy(str2, str1);

    str2[strlen(str1) - strlen(str2)] = '\0';
    memmove(str1, str1 + strlen(str2), strlen(str1) - strlen(str2) + 1);

    printf("After swapping:\nstr1 = %s\nstr2 = %s\n", str1, str2);
    return 0;
}
