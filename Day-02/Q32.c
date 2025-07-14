#include <stdio.h>

int main() {
    char str[100];
    int i, digits = 0, alphabets = 0, specials = 0;
    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || 
            (str[i] >= 'A' && str[i] <= 'Z'))
            alphabets++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else
            specials++;
    }

    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specials);
    return 0;
}
