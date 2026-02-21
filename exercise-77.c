/* Exercise 77 — Functions for max, min and reverse of array elements */
/* ─────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

double array_max(double arr[], int n) {
    double m=arr[0]; for(int i=1;i<n;i++) if(arr[i]>m) m=arr[i]; return m;
}
double array_min(double arr[], int n) {
    double m=arr[0]; for(int i=1;i<n;i++) if(arr[i]<m) m=arr[i]; return m;
}
void array_reverse(double arr[], int n) {
    for(int i=0;i<n/2;i++){double t=arr[i];arr[i]=arr[n-1-i];arr[n-1-i]=t;}
}

int main(void) {
    int n; double arr[MAX];
    printf("Array size: "); scanf("%d",&n);
    for(int i=0;i<n;i++){printf("  arr[%d]: ",i);scanf("%lf",&arr[i]);}
    printf("Max     : %.4f\n", array_max(arr,n));
    printf("Min     : %.4f\n", array_min(arr,n));
    array_reverse(arr,n);
    printf("Reversed: "); for(int i=0;i<n;i++) printf("%.2f ",arr[i]); printf("\n");
    return 0;
}
