#include <stdio.h>

void reverseString(char *str, int len) {
    if (len < 0)
        return;
    printf("%c", str[len]);
    reverseString(str, len - 1);
}

int main() {
    char str[100];
    int len = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[len] != '\0')
        len++;
    printf("Reversed: ");
    reverseString(str, len - 1);
    return 0;
}
