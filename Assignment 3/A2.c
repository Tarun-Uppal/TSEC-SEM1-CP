#include <stdio.h>

void main() {
    int n, i, j, space;

    printf("Enter the number of rows for the upper half of diamond: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (space = i; space < n; space++){
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++){
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (space = n; space > i; space--){
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

