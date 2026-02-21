/* Exercise 75 — Solve a second-degree equation using functions */
/* ─────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <math.h>

double discriminant(double a, double b, double c) { return b*b - 4*a*c; }

void solve(double a, double b, double c) {
    double d = discriminant(a, b, c);
    printf("D = %.4f\n", d);
    if (d > 0)
        printf("x1=%.4f, x2=%.4f\n", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
    else if (d == 0)
        printf("Double root: x=%.4f\n", -b/(2*a));
    else
        printf("Complex roots: %.4f ± %.4fi\n", -b/(2*a), sqrt(-d)/(2*a));
}

int main(void) {
    double a, b, c;
    printf("a="); scanf("%lf",&a);
    printf("b="); scanf("%lf",&b);
    printf("c="); scanf("%lf",&c);
    if (a == 0) { printf("a must be non-zero.\n"); return 1; }
    solve(a, b, c);
    return 0;
}
