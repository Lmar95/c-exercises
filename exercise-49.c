/* Exercise 49 — Program that declares, fills and displays elements of an array */
/* ──────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

int main(void) {
    int n, arr[MAX];
    printf("Array size (max %d): ", MAX);
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("  arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nArray: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
