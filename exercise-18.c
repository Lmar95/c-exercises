/* Exercise 18 — Alternative conditional structure: if … else */
/* Determines whether a number is positive or negative (or zero). */
/* ───────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);

    if (n >= 0)
        printf("%.2f is positive (or zero).\n", n);
    else
        printf("%.2f is negative.\n", n);

    return 0;
}
