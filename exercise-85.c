/* Exercise 85 — Fill and display elements of an array using a pointer */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

int main(void) {
    int  arr[MAX], n;
    int *p = arr;

    printf("Array size: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  arr[%d]: ", i);
        scanf("%d", (p + i));
    }

    printf("\nArray via pointer: ");
    for (int i = 0; i < n; i++) printf("%d ", *(p + i));
    printf("\n");

    return 0;
}
