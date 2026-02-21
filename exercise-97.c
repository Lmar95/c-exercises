/* Exercise 97 — Program that checks whether a string is a palindrome */
/* Method 2: using index comparison.                                   */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <string.h>
#define MAX 256

int main(void) {
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    int len = (int)strlen(str);
    if (len > 0 && str[len-1] == '\n') str[--len] = '\0';

    int is_pal = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) { is_pal = 0; break; }
    }
    printf("\"%s\" %s a palindrome.\n", str, is_pal ? "IS" : "is NOT");
    return 0;
}
