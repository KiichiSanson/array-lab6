#include <stdio.h>

#define MAX_N 100

int main(void)
{
    int a[MAX_N];
    int n, i;

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
    
}