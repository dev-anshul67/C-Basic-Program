#include <stdio.h>
int main() {
    char str[] = "Hello123@#";
    int digits = 0, alphabets = 0, special = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= '0' && str[i] <= '9'))
            digits++;
        else if ((str[i] >= 'A' && str[i] <= 'Z') || 
                 (str[i] >= 'a' && str[i] <= 'z'))
            alphabets++;
        else
            special++;
    }
    printf("Digits: %d, Alphabets: %d, Special: %d", digits, alphabets, special);
    return 0;
}