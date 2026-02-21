/* Exercise 24 — Program with the for loop */
/* Displays multiplication table of a number. */
/* ─────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nMultiplication table of %d:\n", n);
    for (int i = 1; i <= 10; i++)
        printf("  %d x %2d = %4d\n", n, i, n * i);

    return 0;
}
