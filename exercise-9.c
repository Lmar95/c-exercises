/* Exercise 9 — Program that converts duration into hours, minutes, and seconds */
/* ────────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int total_seconds, hours, minutes, seconds;

    printf("Enter a duration in seconds: ");
    scanf("%d", &total_seconds);

    hours   = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("\n%ds = %dh %dm %ds\n", total_seconds, hours, minutes, seconds);

    return 0;
}
