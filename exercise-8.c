/* Exercise 8 — Program that swaps the contents of two variables (Method 2: arithmetic) */
/* ──────────────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    double a, b;

    printf("Enter A: "); scanf("%lf", &a);
    printf("Enter B: "); scanf("%lf", &b);

    printf("\nBefore: A = %.2f, B = %.2f\n", a, b);

    /* Swap without a temporary variable */
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After : A = %.2f, B = %.2f\n", a, b);

    return 0;
}
