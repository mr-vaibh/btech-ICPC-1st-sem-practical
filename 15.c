#include <stdio.h>

void main() {
    int number, sum = 0;

    printf("Enter a natural number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        sum += i;
    }

    printf("Sum of all numbers till %d is %d", number, sum);
}