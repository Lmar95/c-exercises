/* Exercise 57 — Count elements greater than the average in an array */
/* ─────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

int main(void) {
    int    n;
    double arr[MAX];

    printf("Array size: "); scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("  arr[%d]: ", i); scanf("%lf", &arr[i]);
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) sum += arr[i];
    double avg = sum / n;

    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] > avg) count++;

    printf("\nAverage     : %.4f\n", avg);
    printf("Elements > avg: %d\n", count);

    return 0;
}
