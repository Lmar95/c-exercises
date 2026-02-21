/* Exercise 88 — Merge two arrays using pointers */
/* ──────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 200

void merge(int *a, int na, int *b, int nb, int *c) {
    int *p = c;
    for(int i=0;i<na;i++) *p++ = *(a+i);
    for(int i=0;i<nb;i++) *p++ = *(b+i);
}

int main(void) {
    int a[MAX], b[MAX], c[MAX], na, nb;
    printf("Size of array A: "); scanf("%d",&na);
    for(int i=0;i<na;i++){printf("  a[%d]: ",i);scanf("%d",a+i);}
    printf("Size of array B: "); scanf("%d",&nb);
    for(int i=0;i<nb;i++){printf("  b[%d]: ",i);scanf("%d",b+i);}
    merge(a,na,b,nb,c);
    printf("Merged array: ");
    for(int i=0;i<na+nb;i++) printf("%d ",*(c+i)); printf("\n");
    return 0;
}
