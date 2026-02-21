/* Exercise 95 — Display the characters of a string in reverse order */
/* ─────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <string.h>
#define MAX 256

int main(void) {
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    int len = (int)strlen(str);
    if (len > 0 && str[len-1] == '\n') str[--len] = '\0';

    printf("Reversed: ");
    for (int i = len - 1; i >= 0; i--) printf("%c", str[i]);
    printf("\n");

    return 0;
}
