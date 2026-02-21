/* Exercise 17 — Program that calculates solutions of a quadratic equation */
/* a*x^2 + b*x + c = 0                                                      */
/* ────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, d, x1, x2;

    printf("Solve: a*x^2 + b*x + c = 0\n");
    printf("a = "); scanf("%lf", &a);
    printf("b = "); scanf("%lf", &b);
    printf("c = "); scanf("%lf", &c);

    if (a == 0) { printf("'a' must be non-zero.\n"); return 1; }

    d = b*b - 4*a*c;
    printf("\nDiscriminant D = %.4f\n", d);

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        printf("x1 = %.4f\nx2 = %.4f\n", x1, x2);
    } else if (d == 0) {
        printf("Double root: x = %.4f\n", -b / (2*a));
    } else {
        double r = -b/(2*a), i = sqrt(-d)/(2*a);
        printf("x1 = %.4f + %.4fi\nx2 = %.4f - %.4fi\n", r, i, r, i);
    }

    return 0;
}
