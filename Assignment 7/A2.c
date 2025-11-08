#include <stdio.h>
int main()
{
    int num;
    int factorial(int n);
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}
int factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
