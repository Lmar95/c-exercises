/* Exercise 87 — Reverse elements of an array using pointers */
/* ─────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

void reverse(int *arr, int n) {
    int *start = arr, *end = arr + n - 1;
    while (start < end) {
        int tmp = *start; *start = *end; *end = tmp;
        start++; end--;
    }
}

int main(void) {
    int arr[MAX], n;
    printf("Array size: "); scanf("%d",&n);
    for(int i=0;i<n;i++){printf("  arr[%d]: ",i);scanf("%d",arr+i);}
    reverse(arr, n);
    printf("Reversed: ");
    for(int i=0;i<n;i++) printf("%d ",*(arr+i)); printf("\n");
    return 0;
}
