/* Exercise 1 — Program that calculates and displays the age of a person */
/* ──────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <time.h>

int main(void) {
    int birth_year, current_year;
    time_t t   = time(NULL);
    struct tm *now = localtime(&t);
    current_year   = now->tm_year + 1900;

    printf("Enter your birth year: ");
    scanf("%d", &birth_year);

    int age = current_year - birth_year;
    printf("You are approximately %d years old.\n", age);

    return 0;
}
