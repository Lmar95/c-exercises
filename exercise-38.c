/* Exercise 38 — Calculator program (full-featured with loop) */
/* ─────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    double a, b;
    char   op;
    char   cont = 'y';

    while (cont == 'y' || cont == 'Y') {
        printf("\nExpression (e.g. 5.0 + 3.0): ");
        scanf("%lf %c %lf", &a, &op, &b);

        switch (op) {
            case '+': printf("= %.4f\n", a + b); break;
            case '-': printf("= %.4f\n", a - b); break;
            case '*': printf("= %.4f\n", a * b); break;
            case '/':
                if (b == 0) printf("Division by zero!\n");
                else        printf("= %.4f\n", a / b);
                break;
            default: printf("Unknown operator.\n");
        }

        printf("Continue? (y/n): ");
        scanf(" %c", &cont);
    }

    return 0;
}
