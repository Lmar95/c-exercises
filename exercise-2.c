/* Exercise 2 — Program that calculates the perimeter and area of a rectangle */
/* ──────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    double length, width;

    printf("Enter the length: ");
    scanf("%lf", &length);
    printf("Enter the width : ");
    scanf("%lf", &width);

    double perimeter = 2 * (length + width);
    double area      = length * width;

    printf("\nPerimeter : %.2f\n", perimeter);
    printf("Area      : %.2f\n",  area);

    return 0;
}
