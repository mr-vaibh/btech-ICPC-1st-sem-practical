#include <stdio.h>

void main() {
    int length;

    printf("Length of 1D array: ");
    scanf("%d", &length);

    int array[length];

    for (int i = 1; i <= length; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nBelow is the array\n[");
    for (int i = 1; i <= length; i++) {
        printf("%d, ", array[i]);
    }
    printf("]");
}