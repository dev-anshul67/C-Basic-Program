#include <stdio.h>

int main() {
    char str[100];
    int i, freq[256] = {0}, max = 0;
    char result;
    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
        if (freq[(int)str[i]] > max) {
            max = freq[(int)str[i]];
            result = str[i];
        }
    }

    printf("Maximum occurring character: %c\n", result);
    return 0;
}
