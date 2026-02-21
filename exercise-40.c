/* Exercise 40 — Program that determines the inverse (reciprocal) of a number */
/* ──────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);

    if (n == 0)
        printf("Inverse of 0 is undefined.\n");
    else
        printf("Inverse (reciprocal) of %.4f = %.6f\n", n, 1.0 / n);

    return 0;
}
