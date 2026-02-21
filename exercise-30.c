/* Exercise 30 — Program that displays divisors of a positive integer n */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Divisors of %d: ", n);
    for (int i = 1; i <= n; i++)
        if (n % i == 0) printf("%d ", i);
    printf("\n");

    return 0;
}
