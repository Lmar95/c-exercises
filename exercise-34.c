/* Exercise 34 — Program that calculates the Fibonacci sequence */
/* F(0)=0, F(1)=1, F(n)=F(n-1)+F(n-2)                         */
/* ─────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int n;
    printf("How many terms? ");
    scanf("%d", &n);

    long long a = 0, b = 1, c;
    printf("Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%lld ", a);
        c = a + b; a = b; b = c;
    }
    printf("\n");

    return 0;
}
