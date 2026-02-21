/* Exercise 46 — Program that draws a diamond of stars */
/* ──────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int n;
    printf("Half-size (rows in upper half): ");
    scanf("%d", &n);

    /* Upper half */
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++) printf(" ");
        for (int j = 0; j < 2*i - 1; j++) printf("*");
        printf("\n");
    }
    /* Lower half */
    for (int i = n-1; i >= 1; i--) {
        for (int s = 0; s < n - i; s++) printf(" ");
        for (int j = 0; j < 2*i - 1; j++) printf("*");
        printf("\n");
    }

    return 0;
}
