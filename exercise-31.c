/* Exercise 31 — Program with the for loop (various examples) */
/* ─────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    /* 1. Sum from 1 to 10 */
    int sum = 0;
    for (int i = 1; i <= 10; i++) sum += i;
    printf("Sum 1..10 = %d\n", sum);

    /* 2. Even numbers from 1 to 20 */
    printf("Even numbers: ");
    for (int i = 2; i <= 20; i += 2) printf("%d ", i);
    printf("\n");

    /* 3. Countdown from 5 to 1 */
    printf("Countdown: ");
    for (int i = 5; i >= 1; i--) printf("%d ", i);
    printf("Go!\n");

    return 0;
}
