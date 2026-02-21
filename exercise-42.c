/* Exercise 42 — Program to draw a rectangle of stars */
/* ──────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int rows, cols;
    printf("Rows   : "); scanf("%d", &rows);
    printf("Columns: "); scanf("%d", &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) printf("*");
        printf("\n");
    }

    return 0;
}
