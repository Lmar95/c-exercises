/* Exercise 86 — Delete occurrences of a value in an array using pointers */
/* ──────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

int delete_occurrences(int *arr, int n, int target) {
    int new_n = 0;
    for (int i = 0; i < n; i++)
        if (*(arr+i) != target) { *(arr + new_n) = *(arr + i); new_n++; }
    return new_n;
}

int main(void) {
    int arr[MAX], n, target;
    printf("Array size: "); scanf("%d", &n);
    for (int i=0;i<n;i++){printf("  arr[%d]: ",i);scanf("%d",arr+i);}
    printf("Delete value: "); scanf("%d",&target);
    n = delete_occurrences(arr, n, target);
    printf("After deletion: ");
    for (int i=0;i<n;i++) printf("%d ",*(arr+i)); printf("\n");
    return 0;
}
