#include <stdio.h>

void main() {
    int si, principal, rate, time;

    printf("\tS.I. calculator\n");

    printf("Please enter required values\n");
    printf("Principal: ");
    scanf("%d", &principal);

    printf("Rate (in %%): ");
    scanf("%d", &rate);

    printf("Time (in yrs): ");
    scanf("%d", &time);

    si = (principal * rate * time) / 100;

    printf("\nYour Simple Interest is Rs %d.00", si);
}