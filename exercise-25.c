/* Exercise 25 — Program with while and do-while loops */
/* ──────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    /* while loop: sum from 1 to N */
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int sum = 0, i = 1;
    while (i <= n) { sum += i; i++; }
    printf("Sum (while) 1..%d = %d\n", n, sum);

    /* do-while loop: keep asking until positive */
    double val;
    do {
        printf("Enter a positive number: ");
        scanf("%lf", &val);
    } while (val <= 0);
    printf("You entered: %.2f\n", val);

    return 0;
}
