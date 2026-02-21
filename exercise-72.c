/* Exercise 72 — Function that determines whether a number is prime */
/* ──────────────────────────────────────────────────────────────── */

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
    printf("Enter an integer: "); scanf("%d", &n);
    printf("%d is %s.\n", n, is_prime(n) ? "PRIME" : "NOT prime");
    return 0;
}
