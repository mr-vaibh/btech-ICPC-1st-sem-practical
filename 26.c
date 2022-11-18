#include <stdio.h>

void main() {
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%d ", array[j][i]);
        }
        printf("\n");
    }
}

/*
Output:

1 4 7
2 5 6
3 6 9
*/