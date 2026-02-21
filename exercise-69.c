/* Exercise 69 — Function that displays the multiplication table of a number */
/* ──────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

void multiplication_table(int n) {
    printf("\nMultiplication table of %d:\n", n);
    for (int i = 1; i <= 10; i++)
        printf("  %d x %2d = %4d\n", n, i, n * i);
}

int main(void) {
    int n;
    printf("Enter a number: "); scanf("%d", &n);
    multiplication_table(n);
    return 0;
}
