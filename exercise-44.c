/* Exercise 44 — Program that draws a rectangular frame of stars */
/* ─────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int rows, cols;
    printf("Rows   : "); scanf("%d", &rows);
    printf("Columns: "); scanf("%d", &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows-1 || j == 0 || j == cols-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
