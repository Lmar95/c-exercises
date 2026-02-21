/* Exercise 3 — Program that calculates and displays the power X^Y */
/* ──────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <math.h>

int main(void) {
    double x, result;
    int    y;

    printf("Enter the base      (X): ");
    scanf("%lf", &x);
    printf("Enter the exponent  (Y): ");
    scanf("%d", &y);

    result = pow(x, y);
    printf("\n%.2f ^ %d = %.4f\n", x, y, result);

    return 0;
}
