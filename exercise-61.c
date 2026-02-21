/* Exercise 61 — Determine the 1st and 2nd largest elements of an array */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

int main(void) {
    int n, arr[MAX];
    printf("Array size: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  arr[%d]: ", i); scanf("%d", &arr[i]);
    }

    int max1 = arr[0], max2 = -2147483648;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max1)      { max2 = max1; max1 = arr[i]; }
        else if (arr[i] > max2)   max2 = arr[i];
    }

    printf("\n1st largest: %d\n", max1);
    printf("2nd largest: %d\n", max2);

    return 0;
}
