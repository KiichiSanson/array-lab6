#include <stdio.h>

#define N 12

int main(void)
{
    int a[N] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36};
    int c[N];
    int k, i;
    long long prod = 1;
    int has_nonzero = 0;

    printf("Array A: ");
    for (i = 0; i < N; i++) {
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

    for (i = 0; i < N; i++) {
        c[i] = a[i] % k;
    }

    for (i = 0; i < N; i++) {
        if (c[i] != 0) {
            prod *= c[i];
            has_nonzero = 1;
        }
    }

    printf("Array C: ");
    for (i = 0; i < N; i++) {
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