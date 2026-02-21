/* Exercise 96 — Program that checks whether a string is a palindrome */
/* Method 1: using two-pointer approach.                               */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <string.h>
#define MAX 256

int is_palindrome(const char *s, int len) {
    int l = 0, r = len - 1;
    while (l < r) {
        if (s[l] != s[r]) return 0;
        l++; r--;
    }
    return 1;
}

int main(void) {
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, MAX, stdin);
    int len = (int)strlen(str);
    if (len > 0 && str[len-1] == '\n') str[--len] = '\0';
    printf("\"%s\" %s a palindrome.\n", str,
           is_palindrome(str, len) ? "IS" : "is NOT");
    return 0;
}
