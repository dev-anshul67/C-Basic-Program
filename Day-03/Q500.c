#include <stdio.h>

int main(){
    int n, i;
    int fact =1;
    printf("Enter a  number: ");

    scanf("%d", &n);


    if ( n < 0) {
        printf("Invalid number.");
    }
    else {
        for( i = 1; i <= n; i++){
            fact = fact * i;
        }
         printf("Factorial of %d is %d\n ", n, fact);
    }
    return 0;
}