#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, flag = 1;
    printf("Enter a string: ");
    gets(str);

    j = strlen(str) - 1;
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
    