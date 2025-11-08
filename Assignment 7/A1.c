#include<stdio.h>
void main(){
    int n,r;
    int NCR(int n, int r);
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter R: ");
    scanf("%d", &r);
    int ans = NCR(n,r);
    printf("NCR is: %d", ans);
}
int NCR(int n, int r){
    int fact(int n);
    return fact(n)/(fact(r)*fact(n-r));
}
int fact(int n){
    int f = 1;
    for (int i = 1;i<=n;i++){
        f *= i;
    }
    return f;
}
