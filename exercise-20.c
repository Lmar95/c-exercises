/* Exercise 20 — Calculator program using switch and break */
/* ──────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    double a, b;
    char op;

    printf("Enter: number operator number\n> ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+': printf("= %.4f\n", a + b); break;
        case '-': printf("= %.4f\n", a - b); break;
        case '*': printf("= %.4f\n", a * b); break;
        case '/':
            if (b == 0) printf("Error: division by zero.\n");
            else        printf("= %.4f\n", a / b);
            break;
        default: printf("Unknown operator.\n");
    }

    return 0;
}
