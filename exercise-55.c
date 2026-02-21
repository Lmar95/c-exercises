/* Exercise 55 — Program that checks whether a number exists in an array */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

int main(void) {
    int n, arr[MAX];
    printf("Array size: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  arr[%d]: ", i); scanf("%d", &arr[i]);
    }

    int target;
    printf("Search for: "); scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == target) { printf("Found at index %d.\n", i); found = 1; break; }
    if (!found) printf("%d not found in the array.\n", target);

    return 0;
}
