/* Exercise 5 — Program that calculates and displays the average of grades */
/* ─────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int n;
    printf("How many grades? ");
    scanf("%d", &n);

    double sum = 0.0, grade;
    for (int i = 1; i <= n; i++) {
        printf("  Grade %d: ", i);
        scanf("%lf", &grade);
        sum += grade;
    }

    printf("\nSum     : %.2f\n", sum);
    printf("Average : %.2f\n",   sum / n);

    return 0;
}
