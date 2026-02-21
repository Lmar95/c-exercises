/* Exercise 54 — Program that determines the maximum element of an array */
/* ────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

int main(void) {
    int    n;
    double arr[MAX];

    printf("Array size: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  arr[%d]: ", i); scanf("%lf", &arr[i]);
    }

    double max = arr[0];
    int    idx = 0;
    for (int i = 1; i < n; i++)
        if (arr[i] > max) { max = arr[i]; idx = i; }

    printf("\nMaximum: %.4f at index %d\n", max, idx);

    return 0;
}
