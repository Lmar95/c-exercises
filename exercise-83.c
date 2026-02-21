/* Exercise 83 — Function that uses parameter passing by reference */
/* ─────────────────────────────────────────────────────────────── */

#include <stdio.h>

/* Swap two integers by reference */
void swap(int *a, int *b) {
    int tmp = *a; *a = *b; *b = tmp;
}

/* Add 1 to a value through pointer */
void increment(int *x) { (*x)++; }

int main(void) {
    int x = 10, y = 20;
    printf("Before swap: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("After  swap: x=%d, y=%d\n", x, y);

    increment(&x);
    printf("After increment x: %d\n", x);

    return 0;
}
