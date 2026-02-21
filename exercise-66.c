/* Exercise 66 — Program that determines the even and odd elements of an array */
/* ──────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

int main(void) {
    int n, arr[MAX];
    printf("Array size: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  arr[%d]: ", i); scanf("%d", &arr[i]);
    }

    printf("\nEven elements: ");
    for (int i = 0; i < n; i++) if (arr[i] % 2 == 0) printf("%d ", arr[i]);
    printf("\nOdd  elements: ");
    for (int i = 0; i < n; i++) if (arr[i] % 2 != 0) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
