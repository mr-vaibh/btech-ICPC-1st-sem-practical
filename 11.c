#include <stdio.h>

void main() {
    int number = 5346549, length = 7, remainder;
    int sum = 0, temp = number;

    for (int i = 1; i <= length; i++) {
        remainder = temp % 10;
        sum += remainder;
        temp /= 10;
    }

    printf("Sum of all digits of %d is %d", number, sum);
}