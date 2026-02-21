/* Exercise 7 — Program that swaps the contents of two variables (Method 1: temp variable) */
/* ──────────────────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    double a, b, temp;

    printf("Enter A: "); scanf("%lf", &a);
    printf("Enter B: "); scanf("%lf", &b);

    printf("\nBefore: A = %.2f, B = %.2f\n", a, b);

    temp = a;
    a    = b;
    b    = temp;

    printf("After : A = %.2f, B = %.2f\n", a, b);

    return 0;
}
