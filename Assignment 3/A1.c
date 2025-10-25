#include <stdio.h>

void main() {
    int n, i, j, space;

    printf("Enter number of rows for the upper half: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (space = i; space < n; space++){
            printf(" ");
        }for (j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    for (i = n - 1; i >= 1; i--) {
        for (space = n; space > i; space--){
            printf(" ");
        }for (j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}
