/* Exercise 50 — Program that declares, fills and displays elements of an array */
/* (variant: uses floats and shows index alongside each element)                 */
/* ──────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

int main(void) {
    int    n;
    double arr[MAX];

    printf("Array size (max %d): ", MAX);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("  Element [%d]: ", i);
        scanf("%lf", &arr[i]);
    }

    printf("\nArray contents:\n");
    for (int i = 0; i < n; i++)
        printf("  [%d] = %.2f\n", i, arr[i]);

    return 0;
}
