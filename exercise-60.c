/* Exercise 60 — Program that displays a table of prime numbers up to n */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i <= (int)sqrt(n); i += 2)
        if (n % i == 0) return 0;
    return 1;
}

int main(void) {
    int n;
    printf("Find primes up to N: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d:\n", n);
    for (int i = 2; i <= n; i++)
        if (is_prime(i)) printf("%d ", i);
    printf("\n");

    return 0;
}
