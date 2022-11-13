#include <stdio.h>

void main() {
    int length = 5;

    int array[5] = {23, 34, 56, 67, 78};
    int position;

    printf("\nArray BEFORE: [");
    for (int i = 1; i <= length; i++) {
        printf("%d, ", array[i]);
    }
    printf("]\n");

    printf("Delete element position: ");
    scanf("%d", &position);

    for (int i = 1; i <= length; i++) {
        if (i >= position && i != length) {
            array[i] = array[i+1];
        }
    }

    printf("\nArray AFTER: [");
    for (int i = 1; i <= length; i++) {
        printf("%d, ", array[i]);
    }
    printf("]\n");
}