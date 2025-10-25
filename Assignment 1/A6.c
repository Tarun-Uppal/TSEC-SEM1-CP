#include <stdio.h>

void main() {
    int age;
    printf("Ternary Operators\n");
    printf("Please enter your age: ");
    scanf("%d", &age);

    char* voterStatus = (age >= 18) ? "Eligible to vote" : "Not eligible to vote";
    printf("%s\n", voterStatus);
}
