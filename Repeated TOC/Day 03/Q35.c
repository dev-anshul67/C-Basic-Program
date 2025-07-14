#include <stdio.h>
#include <string.h>

void swapStrings(char *str1, char *str2) {
    strcat(str1, str2);
    strcpy(str2, str1);
    str2[strlen(str1) - strlen(str2)] = '\0';
    memmove(str1, str1 + strlen(str2), strlen(str1) - strlen(str2) + 1);
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    swapStrings(str1, str2);
    printf("After swap:\nstr1: %s\nstr2: %s\n", str1, str2);
    return 0;
}
