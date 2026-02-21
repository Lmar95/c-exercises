/* Exercise 63 — Program that removes an element from an array */
/* ─────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

int main(void) {
    int n, arr[MAX];
    printf("Array size: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  arr[%d]: ", i); scanf("%d", &arr[i]);
    }

    int pos;
    printf("Remove element at position: "); scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++) arr[i] = arr[i+1];
    n--;

    printf("\nArray after removal: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
