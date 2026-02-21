/* Exercise 79 — Program that creates, initializes and uses a pointer */
/* ──────────────────────────────────────────────────────────────────── */

#include <stdio.h>

int main(void) {
    int  value = 42;
    int *ptr   = &value;

    printf("value    = %d\n",  value);
    printf("&value   = %p\n",  (void *)&value);
    printf("ptr      = %p\n",  (void *)ptr);
    printf("*ptr     = %d\n",  *ptr);

    /* Modify through pointer */
    *ptr = 100;
    printf("\nAfter *ptr = 100:\n");
    printf("value    = %d\n",  value);

    return 0;
}
