#include <stdio.h>

void main() {
    int number = 5346549, length = 7, remainder;
    int newNumber = 0, temp = number;

    int i = 1;
    do {
        remainder = temp % 10;
        newNumber = newNumber * 10 + remainder;
        temp /= 10;
        i++;
    } while (i <= length);

    printf("Reversed Number: %d", newNumber);
}