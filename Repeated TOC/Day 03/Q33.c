#include <stdio.h>
#include <ctype.h>

void removeSpaces(char *str) {
    int i = 0, j = 0;
    while (str[i]) {
        if (!isspace(str[i])) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeSpaces(str);
    printf("String without spaces: %s", str);
    return 0;
}
