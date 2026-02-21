/* Exercise 64 — Program that determines the unique elements of an array */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

int main(void) {
    int n, arr[MAX];
    printf("Array size: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  arr[%d]: ", i); scanf("%d", &arr[i]);
    }

    printf("\nUnique elements: ");
    for (int i = 0; i < n; i++) {
        int is_unique = 1;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) { is_unique = 0; break; }
        }
        if (is_unique) printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
