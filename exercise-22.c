/* Exercise 22 — Program that determines if a number is even or odd */
/* ─────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d is EVEN.\n", n);
    else
        printf("%d is ODD.\n", n);

    return 0;
}
