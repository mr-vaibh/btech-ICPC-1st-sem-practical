#include <stdio.h>

void main() {
    printf("Numbers divisible by 5 b/w 1 to 100 are:\n\n");
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
            printf("%d\n", i);
        }
    }
}