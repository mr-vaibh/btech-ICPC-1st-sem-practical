#include <stdio.h>

void main() {
    int matrix1[3][3];
    int matrix2[3][3];

    printf("Enter the first matrix element:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the second matrix element:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Matrix Addition:\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }
}

/*
Output:

Enter the first matrix element:
23 43 54
56 76 78
43 46 46

Enter the second matrix element:
23 43 54
56 76 78
43 46 46

Matrix Addition:
46 86 108
112 152 156
86 92 92
*/