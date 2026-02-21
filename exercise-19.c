/* Exercise 19 — Program that calculates the price including tax (TTC) */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    double ht, rate, ttc;

    printf("Price excl. tax (HT)  : "); scanf("%lf", &ht);
    printf("VAT rate (%%)           : "); scanf("%lf", &rate);

    ttc = ht * (1 + rate / 100);

    printf("\nHT  : %.2f\n", ht);
    printf("VAT : %.2f\n",  ht * rate / 100);
    printf("TTC : %.2f\n",  ttc);

    return 0;
}
