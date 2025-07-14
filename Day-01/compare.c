#include <stdio.h>
int main() {
    char str1[] = "abc", str2[] = "abc";
    int i = 0, equal = 1;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            equal = 0;
            break;
        }
        i++;
    }
    if (equal)
        printf("Strings are equal");
    else
        printf("Strings are not equal");
    return 0;
}
