#include <stdio.h>

void reverseString(char *str, int len) {
    if (len <= 0)
        return;
    printf("%c", str[len - 1]);
    reverseString(str, len - 1);
}

int stringLength(char *str) {
    if (*str == '\0')
        return 0;
    return 1 + stringLength(str + 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Reversed string: ");
    reverseString(str, stringLength(str));
    return 0;
}
