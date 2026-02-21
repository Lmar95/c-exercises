/* Exercise 4 — Calculator program */
/* ─────────────────────────────── */

#include <stdio.h>

int main(void) {
    double a, b, result;
    char   op;

    printf("Enter: number operator number (e.g. 5 + 3)\n> ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+': result = a + b; printf("= %.4f\n", result); break;
        case '-': result = a - b; printf("= %.4f\n", result); break;
        case '*': result = a * b; printf("= %.4f\n", result); break;
        case '/':
            if (b == 0) { printf("Error: division by zero.\n"); }
            else        { printf("= %.4f\n", a / b); }
            break;
        default:
            printf("Unknown operator: %c\n", op);
    }

    return 0;
}
