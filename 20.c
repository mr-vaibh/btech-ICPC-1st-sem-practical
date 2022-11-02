#include <stdio.h>

void main() {
    int heightOfPyramid;

    printf("Enter Height of the pyramid: ");
    scanf("%d", &heightOfPyramid);

    for (int i = 1; i <= heightOfPyramid; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}