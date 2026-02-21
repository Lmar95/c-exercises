/* Exercise 100 — Search for the existence of a substring in another string */
/* ──────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <string.h>
#define MAX 256

int find_substring(const char *haystack, const char *needle) {
    int h = (int)strlen(haystack), n = (int)strlen(needle);
    for (int i = 0; i <= h - n; i++) {
        int found = 1;
        for (int j = 0; j < n; j++) {
            if (haystack[i+j] != needle[j]) { found = 0; break; }
        }
        if (found) return i;
    }
    return -1;
}

int main(void) {
    char haystack[MAX], needle[MAX];
    printf("Enter the main string     : "); fgets(haystack, MAX, stdin);
    int hl=(int)strlen(haystack); if(hl>0&&haystack[hl-1]=='\n')haystack[--hl]='\0';
    printf("Enter the substring to find: "); fgets(needle, MAX, stdin);
    int nl=(int)strlen(needle);   if(nl>0&&needle[nl-1]=='\n')needle[--nl]='\0';
    int pos = find_substring(haystack, needle);
    if (pos >= 0) printf("Found at position %d.\n", pos);
    else          printf("Substring not found.\n");
    return 0;
}
