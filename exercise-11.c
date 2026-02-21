/* Exercise 11 — Program that calculates resistance in series and in parallel */
/* ──────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int    n;
    double r, series = 0.0, parallel_inv = 0.0;

    printf("How many resistors? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("  R%d (Ohm): ", i);
        scanf("%lf", &r);
        series      += r;
        parallel_inv += 1.0 / r;
    }

    printf("\nSeries   resistance : %.4f Ohm\n", series);
    printf("Parallel resistance : %.4f Ohm\n", 1.0 / parallel_inv);

    return 0;
}
