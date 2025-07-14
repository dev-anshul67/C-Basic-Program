#include <stdio.h>
#include <string.h>

void findFrequency(char *str) {
    int freq[256] = {0};

    for (int i = 0; str[i]; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Character Frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0 && i != '\n')
            printf("%c: %d\n", i, freq[i]);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    findFrequency(str);
    return 0;
}
