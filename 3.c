#include <stdio.h>

void main() {
    int length, breadth;
    float area, perimeter;

    printf("\tCalculate Area & Perimeter of rectangle\n");

    printf("Length: ");
    scanf("%d", &length);

    printf("Breadth: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\nArea of rectangle is %.2f sq. cm", area);
    printf("\nPerimeter of rectangle is %.2f cm", perimeter);
}