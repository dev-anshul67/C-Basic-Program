#include <stdio.h>
int main() {
    char str[] = "ChatGPT";
    int length = 0;
    while (str[length] != '\0') length++;
    printf("Length = %d", length);
    return 0;
}
