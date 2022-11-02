#include <stdio.h>

void main() {
    int number = 1183, length = 4, remainder;
    int sum = 0, temp = number;

    for (int i = 1; i <= length; i++) {
        remainder = temp % 10;
        sum += remainder * remainder * remainder;
        temp /= 10;
    }

    printf("Armstrong sum of all digits of %d is %d", number, sum);
}