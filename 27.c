#include <stdio.h>

void main() {
    int matrix1[3][3], matrix2[3][3], product[3][3];

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

    printf("Product of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            product[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    // for printing result
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
}

/*
Output:

Enter the first matrix element:
1 2 3
2 3 5
5 6 8
Enter the second matrix element:
2 3 5
4 5 0
5 6 2
Product of the matrix:
25      31      11
41      51      20
74      93      41
*/