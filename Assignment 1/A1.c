#include <stdio.h>

int main() {
    int n1, n2, result;

    printf("Unary Operators \n");
    printf("Please enter pre-increment number: ");
    scanf("%d", &n1);
    printf("Please enter post-decrement number: ");
    scanf("%d", &n2);
    result = ++n1;
    printf("After pre-increment result = %d, a = %d\n", result, n1);
    result = n2--;
    printf("After post-decrement result = %d, b = %d\n", result, n2);
    printf("Logical Not (!0): %d\n", !0);
    printf("Logical Not (!1): %d\n", !1);
    printf("Bitwise Not (~n2) (Negative of second number): %d\n", ~n2);
}
