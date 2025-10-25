#include <stdio.h>
void main()
{
    int n1,n2,gcd;
    printf("GCD\n");
    printf("Enter first number:");
    scanf("%d", &n1);
    printf("Enter second number:");
    scanf("%d", &n2);
    if(n1<n2){
        gcd=n1;
    } else {
        gcd=n2;
    }
    while(n1% gcd!=0 || n2% gcd!=0){
        gcd --;
    }
    if(gcd==1){
        printf("GCD doesn't exist");
    } else {
        printf("GCD= %d",gcd);
    }
}
