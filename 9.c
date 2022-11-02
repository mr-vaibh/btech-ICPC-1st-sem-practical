#include <stdio.h>

void main() {
    int dayOfWeek;

    printf("Day of the Week in number: ");
    scanf("%d", &dayOfWeek);

    if (dayOfWeek == 1) {
        printf("Sunday");
    } else if (dayOfWeek == 2) {
        printf("Monday");
    } else if (dayOfWeek == 3) {
        printf("Tuesday");
    } else if (dayOfWeek == 4) {
        printf("Wednesday");
    } else if (dayOfWeek == 5) {
        printf("Thursday");
    } else if (dayOfWeek == 6) {
        printf("Friday");
    } else if (dayOfWeek == 7) {
        printf("Saturday");
    } else {
        printf("Invalid input. Allowed input is [1-7]");
    }
}