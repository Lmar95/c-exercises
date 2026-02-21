/* Exercise 32 — Program with the while loop (various examples) */
/* ──────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    /* 1. Sum using while */
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int sum = 0, i = 1;
    while (i <= n) { sum += i; i++; }
    printf("Sum 1..%d = %d\n", n, sum);

    /* 2. Digit sum */
    int m;
    printf("Enter an integer: ");
    scanf("%d", &m);

    int digit_sum = 0, tmp = (m < 0) ? -m : m;
    while (tmp > 0) { digit_sum += tmp % 10; tmp /= 10; }
    printf("Sum of digits of %d = %d\n", m, digit_sum);

    return 0;
}
