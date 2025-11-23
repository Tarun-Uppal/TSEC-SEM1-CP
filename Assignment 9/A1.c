#include <stdio.h>

void cbv(int x) {
    x = x + 10;
    printf("Inside call by value: x = %d\n", x);
}

void main() {
    int a = 5;

    printf("Before call by value: a = %d\n", a);
    cbv(a);
    printf("After call by value: a = %d\n\n", a);
}
