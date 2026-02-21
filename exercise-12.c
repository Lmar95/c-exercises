/* Exercise 12 — Program that returns whether two numbers have the same sign */
/* ──────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    double a, b;

    printf("First  number: "); scanf("%lf", &a);
    printf("Second number: "); scanf("%lf", &b);

    if ((a >= 0 && b >= 0) || (a < 0 && b < 0))
        printf("\n%.2f and %.2f have the SAME sign.\n", a, b);
    else
        printf("\n%.2f and %.2f have DIFFERENT signs.\n", a, b);

    return 0;
}
