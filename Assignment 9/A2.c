#include <stdio.h>
void cbr(int *y) {
    *y = *y + 10;
    printf("Inside call by reference: y = %d\n", *y);
}

void main() {
    int a = 5;
    printf("Before call by reference: a = %d\n", a);
    cbr(&a);
    printf("After call by reference: a = %d\n", a);
}

