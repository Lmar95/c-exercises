/* Exercise 21 — Program that displays a direction using switch and break */
/* ──────────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    char direction;
    printf("Enter direction (N/S/E/W): ");
    scanf(" %c", &direction);

    switch (direction) {
        case 'N': case 'n': printf("North\n"); break;
        case 'S': case 's': printf("South\n"); break;
        case 'E': case 'e': printf("East\n");  break;
        case 'W': case 'w': printf("West\n");  break;
        default: printf("Unknown direction.\n");
    }

    return 0;
}
