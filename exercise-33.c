/* Exercise 33 — Program that calculates and displays the sum of a sequence */
/* S = 1^2 + 2^2 + 3^2 + ... + n^2                                          */
/* ──────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    long long sum = 0;
    for (int i = 1; i <= n; i++) sum += (long long)i * i;

    printf("S = 1^2 + 2^2 + ... + %d^2 = %lld\n", n, sum);
    /* Closed form verification: n*(n+1)*(2n+1)/6 */

    return 0;
}
