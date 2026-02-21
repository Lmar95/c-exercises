/* Exercise 84 — Pointers and arrays */
/* ─────────────────────────────────── */

#include <stdio.h>
#define N 5

int main(void) {
    int  arr[N] = {10, 20, 30, 40, 50};
    int *p      = arr;   /* pointer to first element */

    printf("Accessing array via pointer:\n");
    for (int i = 0; i < N; i++)
        printf("  *(p+%d) = %d  ≡  arr[%d] = %d\n", i, *(p+i), i, arr[i]);

    /* Sum using pointer arithmetic */
    int sum = 0;
    for (int i = 0; i < N; i++) sum += *(p + i);
    printf("Sum = %d\n", sum);

    return 0;
}
