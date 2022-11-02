#include <stdio.h>

void main() {
    int a = 10, b = 20;
    int temp;

    printf("a is %d & b is %d BEFORE swapping\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("a is %d & b is %d AFTER swapping", a, b);
}