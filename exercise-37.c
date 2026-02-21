/* Exercise 37 — Guess a number game */
/* ─────────────────────────────────── */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned)time(NULL));
    int secret   = rand() % 100 + 1;
    int guess    = 0;
    int attempts = 0;

    printf("Guess the number between 1 and 100!\n");
    do {
        printf("Your guess: ");
        scanf("%d", &guess);
        attempts++;
        if      (guess < secret) printf("Too low!\n");
        else if (guess > secret) printf("Too high!\n");
    } while (guess != secret);

    printf("Correct! Found in %d attempt(s).\n", attempts);
    return 0;
}
