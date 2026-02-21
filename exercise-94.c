/* Exercise 94 — Determine the most frequently repeated character in a string */
/* ──────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#include <string.h>
#define MAX 256

int main(void) {
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    int freq[256] = {0};
    for (int i = 0; str[i] && str[i] != '\n'; i++)
        freq[(unsigned char)str[i]]++;

    char most_freq = str[0];
    for (int i = 1; str[i] && str[i] != '\n'; i++)
        if (freq[(unsigned char)str[i]] > freq[(unsigned char)most_freq])
            most_freq = str[i];

    printf("Most frequent character: '%c' (%d times)\n",
           most_freq, freq[(unsigned char)most_freq]);
    return 0;
}
