/* Exercise 56 — Count the number of occurrences of a number in an array */
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
    printf("Count occurrences of: "); scanf("%d", &target);

    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == target) count++;

    printf("%d appears %d time(s).\n", target, count);

    return 0;
}
