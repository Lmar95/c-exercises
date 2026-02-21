/* Exercise 70 — Function that calculates and displays the cube of a number */
/* ──────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

double cube(double n) {
    return n * n * n;
}

int main(void) {
    double n;
    printf("Enter a number: "); scanf("%lf", &n);
    printf("Cube of %.2f = %.4f\n", n, cube(n));
    return 0;
}
