/* Exercise 45 — Program to draw a square frame of stars */
/* ──────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int n;
    printf("Frame size (n x n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
