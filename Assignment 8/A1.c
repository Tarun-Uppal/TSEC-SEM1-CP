#include <stdio.h>

void main() {
    int n = 10;
    int *ptr;

    ptr = &n;

    printf("Value of n        : %d\n", n);
    printf("Value via *ptr    : %d\n", *ptr);
}

