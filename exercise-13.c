/* Exercise 13 — Program that changes contents of 2 variables according to a condition */
/* Rule: A must hold the larger value after the operation.                              */
/* ──────────────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    double a, b, temp;

    printf("Enter A: "); scanf("%lf", &a);
    printf("Enter B: "); scanf("%lf", &b);

    printf("\nBefore: A = %.2f, B = %.2f\n", a, b);

    if (a < b) {
        temp = a; a = b; b = temp;
        printf("Swap performed.\n");
    } else {
        printf("No swap needed.\n");
    }

    printf("After : A = %.2f, B = %.2f\n", a, b);

    return 0;
}
