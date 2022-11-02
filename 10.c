#include <stdio.h>

void main() {
    char operation;
    float num1, num2;

    printf("\tSimple Calulator\n");

    printf("Choose operation [+, -, *, /]: ");
    scanf("%c", &operation);

    printf("Number 1: ");
    scanf("%f", &num1);
    printf("Number 2: ");
    scanf("%f", &num2);

    switch (operation) {
        case '+':
            printf("Answer: %.2f", num1 + num2);
            break;
        case '-':
            printf("Answer: %.2f", num1 - num2);
            break;
        case '*':
            printf("Answer: %.2f", num1 * num2);
            break;
        case '/':
            printf("Answer: %.2f", num1 / num2);
            break;
        default:
            printf("Invalid operation. Only +, -, *, / is allowed as input.");
            break;
    }
}