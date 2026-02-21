/* Exercise 99 — Displaying part (substring) of a character string */
/* ─────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <string.h>
#define MAX 256

void substring(const char *src, int start, int length, char *dest) {
    int src_len = (int)strlen(src);
    if (start < 0 || start >= src_len) { dest[0] = '\0'; return; }
    int i;
    for (i = 0; i < length && src[start + i]; i++)
        dest[i] = src[start + i];
    dest[i] = '\0';
}

int main(void) {
    char str[MAX], result[MAX];
    int  start, length;
    printf("Enter a string : "); fgets(str, MAX, stdin);
    int len=(int)strlen(str);
    if(len>0&&str[len-1]=='\n')str[--len]='\0';
    printf("Start index    : "); scanf("%d",&start);
    printf("Length         : "); scanf("%d",&length);
    substring(str, start, length, result);
    printf("Substring: \"%s\"\n", result);
    return 0;
}
