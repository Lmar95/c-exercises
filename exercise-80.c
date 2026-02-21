/* Exercise 80 — Create a calculator using pointers */
/* ─────────────────────────────────────────────────── */

#include <stdio.h>

void add(double *a, double *b, double *result) { *result = *a + *b; }
void sub(double *a, double *b, double *result) { *result = *a - *b; }
void mul(double *a, double *b, double *result) { *result = *a * *b; }
void dvd(double *a, double *b, double *result) {
    if (*b == 0) { printf("Division by zero!\n"); *result = 0; }
    else         { *result = *a / *b; }
}

int main(void) {
    double a, b, result;
    char op;
    printf("Expression (e.g. 5 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch(op) {
        case '+': add(&a,&b,&result); break;
        case '-': sub(&a,&b,&result); break;
        case '*': mul(&a,&b,&result); break;
        case '/': dvd(&a,&b,&result); break;
        default:  printf("Unknown operator.\n"); return 1;
    }
    printf("= %.4f\n", result);
    return 0;
}
