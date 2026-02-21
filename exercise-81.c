/* Exercise 81 — Program that checks if a number is even using pointers */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int is_even_ptr(int *n) {
    return (*n % 2 == 0);
}

int main(void) {
    int n;
    printf("Enter an integer: "); scanf("%d", &n);
    printf("%d is %s.\n", n, is_even_ptr(&n) ? "EVEN" : "ODD");
    return 0;
}
