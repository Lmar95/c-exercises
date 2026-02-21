/* Exercise 71 — Function that checks whether the year is a leap year */
/* ────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int is_leap_year(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int main(void) {
    int year;
    printf("Enter a year: "); scanf("%d", &year);
    printf("%d %s a leap year.\n", year, is_leap_year(year) ? "IS" : "is NOT");
    return 0;
}
