#include <stdio.h>

int main() {
    int n1, n2, result;

    printf("Arithmetic Operators\n");
    printf("Please enter the first number: ");
    scanf("%d", &n1);
    printf("Please enter the second number: ");
    scanf("%d", &n2);
    result = n1 + n2;
    printf("n1 + n2 = %d\n", result);
    result = n1 - n2;
    printf("n1 - n2 = %d\n", result);
    result = n1 * n2;
    printf("n1 * n2 = %d\n", result);
    result = n1 / n2;
    printf("n1 / n2 = %d\n", result);
    result = n1 % n2;
    printf("n1 %% n2 = %d\n", result);
}

