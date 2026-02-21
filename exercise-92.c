/* Exercise 92 — Program that calculates the Hamming distance between two words */
/* The Hamming distance = number of positions where characters differ.           */
/* ────────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <string.h>

int hamming_distance(const char *a, const char *b) {
    int len = (int)strlen(a);
    if ((int)strlen(b) != len) return -1;   /* must be same length */
    int dist = 0;
    for (int i = 0; i < len; i++)
        if (a[i] != b[i]) dist++;
    return dist;
}

int main(void) {
    char a[256], b[256];
    printf("Enter word 1: "); scanf("%255s", a);
    printf("Enter word 2: "); scanf("%255s", b);
    int d = hamming_distance(a, b);
    if (d == -1) printf("Words must have the same length.\n");
    else         printf("Hamming distance: %d\n", d);
    return 0;
}
