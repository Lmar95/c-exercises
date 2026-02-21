/* Exercise 27 — Program that calculates and displays the sum of a series */
/* S = 1 - 1/2 + 1/3 - 1/4 + ... (alternating series)                    */
/* ──────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int n;
    printf("Number of terms N: ");
    scanf("%d", &n);

    double sum  = 0.0;
    int    sign = 1;
    for (int i = 1; i <= n; i++) {
        sum  += sign * (1.0 / i);
        sign *= -1;
    }

    printf("S (%d terms) = %.6f\n", n, sum);

    return 0;
}
