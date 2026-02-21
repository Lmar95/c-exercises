/* Exercise 91 — Declare, input and display a string */
/* ─────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 256

int main(void) {
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    printf("You entered: %s", str);
    return 0;
}
