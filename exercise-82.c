/* Exercise 82 — Display the divisors of a number using pointers */
/* ─────────────────────────────────────────────────────────── */

#include <stdio.h>

void print_divisors(int *n) {
    printf("Divisors of %d: ", *n);
    for (int i = 1; i <= *n; i++)
        if (*n % i == 0) printf("%d ", i);
    printf("\n");
}

int main(void) {
    int n;
    printf("Enter a positive integer: "); scanf("%d", &n);
    print_divisors(&n);
    return 0;
}
