/* Exercise 58 — Program that fills and displays elements of an array (random) */
/* ────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main(void) {
    srand((unsigned)time(NULL));
    int n;
    printf("Array size (max %d): ", MAX); scanf("%d", &n);

    int arr[MAX];
    printf("\nGenerated array:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        printf("  arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
