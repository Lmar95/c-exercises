/* Exercise 48 — Program that draws an isosceles triangle of stars */
/* ─────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int n;
    printf("Number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++) printf(" ");
        for (int j = 0; j < 2*i - 1; j++) printf("*");
        printf("\n");
    }

    return 0;
}
