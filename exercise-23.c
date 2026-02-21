/* Exercise 23 — Program that determines whether a year is a leap year */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int is_leap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int main(void) {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (is_leap(year))
        printf("%d is a LEAP year.\n", year);
    else
        printf("%d is NOT a leap year.\n", year);

    return 0;
}
