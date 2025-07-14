#include <stdio.h>
int main() {
    char str[] = "This is a string.";
    int count = 0, inWord = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (!inWord) {
                inWord = 1;
                count++;
            }
        } else {
            inWord = 0;
        }
    }
    printf("Words: %d", count);
    return 0;
}
