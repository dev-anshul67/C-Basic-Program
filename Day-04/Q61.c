#include <stdio.h>

int countVowels(char *str) {
    if (*str == '\0')
        return 0;

    char ch = *str;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1 + countVowels(str + 1);
    else
        return countVowels(str + 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Number of vowels = %d\n", countVowels(str));
    return 0;
}
