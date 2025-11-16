#include <stdio.h>

void main() {
    int n = 10;
    int *ptr;
    int **pptr;

    ptr = &n;
    pptr = &ptr;

    printf("Value of n        : %d\n", n);
    printf("Value via *ptr    : %d\n", *ptr);
    printf("Value via **pptr  : %d\n", **pptr);

    **pptr = 50;

    printf("\nAfter modification:\n");
    printf("Value of n        : %d\n", n);
    printf("Value via *ptr    : %d\n", *ptr);
    printf("Value via **pptr  : %d\n", **pptr);
}


