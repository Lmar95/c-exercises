/* Exercise 26 — Program that calculates the sum of a harmonic series */
/* S = 1 + 1/2 + 1/3 + ... + 1/n                                      */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int n;
    printf("Number of terms N: ");
    scanf("%d", &n);

    double sum = 0.0;
    for (int i = 1; i <= n; i++)
        sum += 1.0 / i;

    printf("Harmonic sum S(1..%d) = %.6f\n", n, sum);

    return 0;
}
