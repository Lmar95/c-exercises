/* Exercise 52 — Program that calculates the dot product of two vectors */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

int main(void) {
    int    n;
    double a[MAX], b[MAX];

    printf("Vector size: ");
    scanf("%d", &n);

    printf("Vector A:\n");
    for (int i = 0; i < n; i++) {
        printf("  a[%d]: ", i); scanf("%lf", &a[i]);
    }
    printf("Vector B:\n");
    for (int i = 0; i < n; i++) {
        printf("  b[%d]: ", i); scanf("%lf", &b[i]);
    }

    double dot = 0.0;
    for (int i = 0; i < n; i++) dot += a[i] * b[i];
    printf("\nDot product A·B = %.4f\n", dot);

    return 0;
}
