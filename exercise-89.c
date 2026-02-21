/* Exercise 89 — Sort an array in ascending order using pointers (bubble sort) */
/* ────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

void sort_asc(int *arr, int n) {
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1-i;j++)
            if(*(arr+j) > *(arr+j+1)) {
                int t=*(arr+j); *(arr+j)=*(arr+j+1); *(arr+j+1)=t;
            }
}

int main(void) {
    int arr[MAX], n;
    printf("Array size: "); scanf("%d",&n);
    for(int i=0;i<n;i++){printf("  arr[%d]: ",i);scanf("%d",arr+i);}
    sort_asc(arr,n);
    printf("Sorted: ");
    for(int i=0;i<n;i++) printf("%d ",*(arr+i)); printf("\n");
    return 0;
}
