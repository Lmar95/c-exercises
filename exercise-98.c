/* Exercise 98 — Delete all occurrences of a character in a string */
/* ─────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <string.h>
#define MAX 256

void delete_char(char *str, char c) {
    int write_idx = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] != c) str[write_idx++] = str[i];
    str[write_idx] = '\0';
}

int main(void) {
    char str[MAX], c;
    printf("Enter a string: "); fgets(str, MAX, stdin);
    int len = (int)strlen(str);
    if (len > 0 && str[len-1]=='\n') str[--len]='\0';
    printf("Character to delete: "); scanf(" %c", &c);
    delete_char(str, c);
    printf("Result: %s\n", str);
    return 0;
}
