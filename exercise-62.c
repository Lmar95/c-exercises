/* Exercise 62 — Insert an element into an array at a specified position */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 101

int main(void) {
    int n, arr[MAX];
    printf("Array size: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  arr[%d]: ", i); scanf("%d", &arr[i]);
    }

    int pos, val;
    printf("Insert value  : "); scanf("%d", &val);
    printf("At position   : "); scanf("%d", &pos);

    for (int i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = val;
    n++;

    printf("\nArray after insertion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
