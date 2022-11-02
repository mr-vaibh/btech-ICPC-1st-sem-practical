#include <stdio.h>

void main() {
    int number, product = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = number; i >= 1; i--) {
        product *= i;
    }

    printf("Factorial of %d is %d", number, product);
}