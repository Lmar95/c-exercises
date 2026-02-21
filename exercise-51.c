/* Exercise 51 — Program that calculates the sum, product and average of an array */
/* ──────────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

int main(void) {
    int    n;
    double arr[MAX];

    printf("Array size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  arr[%d]: ", i);
        scanf("%lf", &arr[i]);
    }

    double sum = 0.0, product = 1.0;
    for (int i = 0; i < n; i++) {
        sum     += arr[i];
        product *= arr[i];
    }

    printf("\nSum     : %.4f\n", sum);
    printf("Product : %.4f\n", product);
    printf("Average : %.4f\n", sum / n);

    return 0;
}
