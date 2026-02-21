/* Exercise 6 — Program that calculates and displays the volume of a sphere */
/* ─────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(void) {
    double radius, volume;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    if (radius < 0) {
        printf("Error: radius must be positive.\n");
    } else {
        volume = (4.0 / 3.0) * PI * pow(radius, 3);
        printf("\nVolume = %.4f\n", volume);
    }

    return 0;
}
