#include <stdio.h>

void main() {
    int number, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1 && number > 0 && number != 1) {
        printf("%d is a prime number", number);
    } else {
        printf("%d is a NOT prime number", number);
    }
}