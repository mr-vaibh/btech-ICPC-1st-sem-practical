#include <stdio.h>

void main() {
    int array[5] = {4, 6, 7, 54, 2};
    int searchNum;
    
    printf("Search number: ");
    scanf("%d", &searchNum);

    for (int i = 1; i <= 5; i++) {
        if (array[i] == searchNum) {
            printf("Number found in the array at %d position", i);
            break;
        } else if (i == 5) {
            printf("Number NOT found in the array.");
        }
    }
}

/*
Output:

Search number: 6
Number found in the array at 2 position
*/
