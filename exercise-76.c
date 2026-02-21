/* Exercise 76 — Calculate the sum, product, and average of an array using functions */
/* ──────────────────────────────────────────────────────────────────────────────── */

#include <stdio.h>
#define MAX 100

double array_sum(double arr[], int n) {
    double s = 0; for (int i=0;i<n;i++) s+=arr[i]; return s;
}
double array_product(double arr[], int n) {
    double p = 1; for (int i=0;i<n;i++) p*=arr[i]; return p;
}
double array_average(double arr[], int n) { return array_sum(arr,n)/n; }

int main(void) {
    int n; double arr[MAX];
    printf("Array size: "); scanf("%d",&n);
    for (int i=0;i<n;i++){printf("  arr[%d]: ",i);scanf("%lf",&arr[i]);}
    printf("Sum     : %.4f\n", array_sum(arr,n));
    printf("Product : %.4f\n", array_product(arr,n));
    printf("Average : %.4f\n", array_average(arr,n));
    return 0;
}
