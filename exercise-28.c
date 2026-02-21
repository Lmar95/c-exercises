/* Exercise 28 — Program that calculates and displays the factorial of a number */
/* ────────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) result *= i;
    return result;
}

int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial undefined for negatives.\n");
    else
        printf("%d! = %lld\n", n, factorial(n));

    return 0;
}
