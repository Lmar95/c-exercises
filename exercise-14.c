/* Exercise 14 — Multiple-choice conditional: if-else if-else */
/* Displays the day name from its number (1=Monday … 7=Sunday). */
/* ──────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a day number (1-7): ");
    scanf("%d", &n);

    if      (n == 1) printf("Monday\n");
    else if (n == 2) printf("Tuesday\n");
    else if (n == 3) printf("Wednesday\n");
    else if (n == 4) printf("Thursday\n");
    else if (n == 5) printf("Friday\n");
    else if (n == 6) printf("Saturday\n");
    else if (n == 7) printf("Sunday\n");
    else             printf("Invalid day number.\n");

    return 0;
}
