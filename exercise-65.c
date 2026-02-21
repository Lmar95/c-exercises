/* Exercise 65 — Program that determines non-unique (duplicate) elements */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

int main(void) {
    int n, arr[MAX];
    printf("Array size: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  arr[%d]: ", i); scanf("%d", &arr[i]);
    }

    printf("\nNon-unique (duplicate) elements: ");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) { printf("%d ", arr[i]); break; }
        }
    }
    printf("\n");

    return 0;
}
