/* Exercise 15 — Multiple-choice conditional: if-else if-else */
/* Displays the month name from its number (1=January … 12=December). */
/* ─────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int m;
    const char *months[] = {
        "", "January","February","March","April","May","June",
        "July","August","September","October","November","December"
    };

    printf("Enter a month number (1-12): ");
    scanf("%d", &m);

    if (m >= 1 && m <= 12)
        printf("%s\n", months[m]);
    else
        printf("Invalid month number.\n");

    return 0;
}
