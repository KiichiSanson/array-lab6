#include <stdio.h>

#define N 12

int main(void)
{
    int a[N] = {17, 8, 23, 40, 5, 12, 31, 9, 26, 14, 7, 30};
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

    for (i = 0; i < N;