#include <stdio.h>
void main()
{
    int num1, num2, lcm;
    printf("LCM\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    lcm = (num1 > num2) ? num1 : num2;
    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0){
            printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);
            break;
        }
        lcm++;
    }
}
