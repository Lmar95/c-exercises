/* Exercise 41 — Program that checks if a number is a palindrome */
/* ─────────────────────────────────────────────────────────────── */

#include <stdio.h>

int is_palindrome(long long n) {
    long long original = (n < 0) ? -n : n;
    long long reversed = 0, tmp = original;
    while (tmp > 0) {
        reversed = reversed * 10 + tmp % 10;
        tmp /= 10;
    }
    return original == reversed;
}

int main(void) {
    long long n;
    printf("Enter an integer: ");
    scanf("%lld", &n);
    printf("%lld %s a palindrome.\n", n, is_palindrome(n) ? "IS" : "is NOT");
    return 0;
}
