/* Exercise 74 — Functions that calculate diameter, area, and perimeter of a circle */
/* ──────────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

double diameter(double r)  { return 2 * r; }
double area(double r)      { return PI * r * r; }
double perimeter(double r) { return 2 * PI * r; }

int main(void) {
    double r;
    printf("Enter the radius: "); scanf("%lf", &r);
    printf("Diameter  : %.4f\n", diameter(r));
    printf("Area      : %.4f\n", area(r));
    printf("Perimeter : %.4f\n", perimeter(r));
    return 0;
}
