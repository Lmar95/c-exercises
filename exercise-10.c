/* Exercise 10 — Program that calculates the distance between two points A and B */
/* ──────────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <math.h>

int main(void) {
    double x1, y1, x2, y2;

    printf("Point A — x: "); scanf("%lf", &x1);
    printf("Point A — y: "); scanf("%lf", &y1);
    printf("Point B — x: "); scanf("%lf", &x2);
    printf("Point B — y: "); scanf("%lf", &y2);

    double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("\nDistance AB = %.4f\n", dist);

    return 0;
}
