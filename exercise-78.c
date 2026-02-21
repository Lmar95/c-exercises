/* Exercise 78 — Functions to sort an array in ascending and descending order */
/* ──────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

void sort_asc(double arr[], int n) {
    for(int i=0;i<n-1;i++) for(int j=0;j<n-1-i;j++)
        if(arr[j]>arr[j+1]){double t=arr[j];arr[j]=arr[j+1];arr[j+1]=t;}
}
void sort_desc(double arr[], int n) {
    for(int i=0;i<n-1;i++) for(int j=0;j<n-1-i;j++)
        if(arr[j]<arr[j+1]){double t=arr[j];arr[j]=arr[j+1];arr[j+1]=t;}
}
void print_array(double arr[], int n) {
    for(int i=0;i<n;i++) printf("%.2f ",arr[i]); printf("\n");
}

int main(void) {
    int n; double arr[MAX], copy[MAX];
    printf("Array size: "); scanf("%d",&n);
    for(int i=0;i<n;i++){printf("  arr[%d]: ",i);scanf("%lf",&arr[i]);copy[i]=arr[i];}
    sort_asc(arr,n);  printf("Ascending : "); print_array(arr,n);
    sort_desc(copy,n);printf("Descending: "); print_array(copy,n);
    return 0;
}
