/* Exercise 59 — Program that reverses the elements of an array */
/* ─────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

int main(void) {
    int n, arr[MAX];
    printf("Array size: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  arr[%d]: ", i); scanf("%d", &arr[i]);
    }

    /* Reverse in-place */
    for (int i = 0; i < n / 2; i++) {
        int tmp        = arr[i];
        arr[i]         = arr[n - 1 - i];
        arr[n - 1 - i] = tmp;
    }

    printf("\nReversed array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
