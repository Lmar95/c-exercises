/* Exercise 29 — Sum of squares of the first n odd integers */
/* S = 1^2 + 3^2 + 5^2 + ... + (2n-1)^2                    */
/* ─────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    long long sum = 0;
    for (int k = 1; k <= n; k++) {
        int odd = 2*k - 1;
        sum += (long long)odd * odd;
    }

    printf("Sum of squares of first %d odd numbers = %lld\n", n, sum);

    return 0;
}
