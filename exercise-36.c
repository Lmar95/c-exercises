/* Exercise 36 — Program that displays multiplication tables from 1 to 10 */
/* ──────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    for (int n = 1; n <= 10; n++) {
        printf("\nTable of %d:\n", n);
        for (int i = 1; i <= 10; i++)
            printf("  %d x %2d = %4d\n", n, i, n * i);
    }
    return 0;
}
