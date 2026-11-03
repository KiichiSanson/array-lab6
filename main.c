#include <stdio.h>

#define MAX_N 100

int main(void)
{
    int a[MAX_N];
    int c[MAX_N];
    int n, k, i;
    long long prod = 1;
    int has_nonzero = 0;

    printf("Enter array size (1-%d): ", MAX_N);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX_N) {
        printf("Error: invalid size.\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Error: integer expected.\n");
            return 1;
        }
    }

    printf("Array A: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("Enter integer k (k < 10): ");
    if (scanf("%d", &k) != 1) {
        printf("Error: k must be an integer.\n");
        return 1;
    }
    if (k >= 10) {
        printf("Error: k must be less than 10.\n");
        return 1;
    }
    if (k == 0) {
        printf("Error: k = 0, division by zero is impossible.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        c[i] = a[i] % k;
    }

    for (i = 0; i < n; i++) {
        if (c[i] != 0) {
            prod *= c[i];
            has_nonzero = 1;
        }
    }

    printf("Array C: ");
    for (i = 0; i < n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    if (has_nonzero) {
        printf("Product of nonzero elements of C: %lld\n", prod);
    } else {
        printf("All elements of C are zero, product does not exist.\n");
    }

    return 0;
}