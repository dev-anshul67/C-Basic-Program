#include <stdio.h>
int main() {
    char str[] = "HeLLo123";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    printf("Uppercase: %s", str);
    return 0;
}
