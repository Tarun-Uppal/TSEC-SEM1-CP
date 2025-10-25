#include <stdio.h>

void main() {
    int n1, n2;
    printf("Bitwise Operators\n");
    printf("Please enter the first number: ");
    scanf("%d", &n1);
    printf("Please enter the second number: ");
    scanf("%d", &n2);

    printf("n1 & n2 (Bitwise AND): %d\n", n1 & n2);
    printf("n1 | n2 (Bitwise OR): %d\n", n1 | n2);
    printf("n1 ^ n2 (Bitwise n1OR): %d\n", n1 ^ n2);
    printf("~n1 (Bitwise NOT): %d\n", ~n1);
    printf("n1 << 1 (Left Shift): %d\n", n1 << 1);
    printf("n2 >> 1 (Right Shift): %d\n", n2 >> 1);
}
