/* Exercise 73 — Function that counts the number of digits in a number */
/* ────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int count_digits(long long n) {
    if (n == 0) return 1;
    int count = 0;
    if (n < 0) n = -n;
    while (n > 0) { count++; n /= 10; }
    return count;
}

int main(void) {
    long long n;
    printf("Enter an integer: "); scanf("%lld", &n);
    printf("%lld has %d digit(s).\n", n, count_digits(n));
    return 0;
}
