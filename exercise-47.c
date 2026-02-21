/* Exercise 47 — Program that draws a triangular frame of stars */
/* ─────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int n;
    printf("Number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++) printf(" ");
        if (i == 1) {
            printf("*");
        } else if (i == n) {
            for (int j = 0; j < n; j++) printf("*");
        } else {
            printf("*");
            for (int j = 0; j < 2*i - 3; j++) printf(" ");
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
