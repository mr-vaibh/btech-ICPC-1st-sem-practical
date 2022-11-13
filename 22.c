#include <stdio.h>

void main() {
    int number;
    int secondLast = 0, last = 1, current;

    printf("How many numbers to print?: ");
    scanf("%d", &number);

    printf("%d %d ", secondLast, last);
    for (int i = 2; i < number; i++) {
        current = secondLast + last;
        printf("%d ", current);
        secondLast = last;
        last = current;
    }
}