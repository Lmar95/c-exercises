/* Exercise 93 — Program that determines the length of a string (without strlen) */
/* ──────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 256

int string_length(const char *s) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

int main(void) {
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    /* Remove trailing newline */
    int len = string_length(str);
    if (len > 0 && str[len-1] == '\n') str[--len] = '\0';
    printf("Length of \"%s\" = %d\n", str, string_length(str));
    return 0;
}
