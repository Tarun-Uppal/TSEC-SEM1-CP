#include <stdio.h>

void main() {
    int n1, n2;

    printf("Logical Operators\n");
    printf("Please enter the first number: ");
    scanf("%d", &n1);
    printf("Please enter the second number: ");
    scanf("%d", &n2);
    int c1 = (n1 > n2);
    int c2 = (n1 < n2);
    printf("c1 = %d, c2 = %d", c1, c2);
    printf("(n1 > n2) && (n1 < n2) : %d\n", c1 && c2);
    printf("(n1 > n2) || (n1 < n2) : %d\n", c1 || c2);
    printf("!(n1 > n2): %d\n", !c1);
    printf("!(n1 < n2): %d\n", !c2);
}



