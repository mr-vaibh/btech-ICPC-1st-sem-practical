#include <stdio.h>
#include <math.h>

void main() {
    float a, b, c;
    float d, root1, root2;

    printf("\tQuadratic eqn solver\n");

    printf("\nPlease enter required values\n");
    printf("Coefficient of x sq. (A): ");
    scanf("%f", &a);
    printf("Coefficient of x (B): ");
    scanf("%f", &b);
    printf("Constant (C): ");
    scanf("%f", &c);

    d = (b * b) - (4 * a * c);

    if (d > 0) {
        root1 = (-b - sqrt(d)) / (2 * a);
        root2 = (-b + sqrt(d)) / (2 * a);
        printf("The two roots are %.2f, %.2f", root1, root2);
    } else if (d == 0) {
        root1 = root2 = -b / (2 * a);
        printf("The two roots are %.2f, %.2f", root1, root2);
    } else {
        printf("No real roots exist for such equation");
    }
}