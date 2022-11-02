#include <stdio.h>

void main() {
    int a = 10, b = 20;

    printf("a is %d & b is %d BEFORE swapping\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a is %d & b is %d AFTER swapping", a, b);
}