#include <stdio.h>
int main() {
    char str[] = "HeLLo123";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    printf("Lowercase: %s", str);
    return 0;
}
