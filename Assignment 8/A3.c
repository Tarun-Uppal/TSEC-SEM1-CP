#include <stdio.h>

void main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int (*p)[5] = &arr;
    printf("Accessing array using pointer to array:\n");
    for (int i = 0; i < 5; i++) {
        printf("(*p)[%d] = %d\n", i, (*p)[i]);
    }
}
