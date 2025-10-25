#include"stdio.h"
void main()
{
    int n,count=0,result=0,mul=1,cnt,rem;
    printf("Armstrong Numbers\n");
    printf("enter a number:");
    scanf("%d",&n);
    int q=n;
    while(q!=0){
        q=q/10;
        count++;
    }
    cnt=count;
    q=n;
    while(q!=0){
        rem=q%10;
        while(cnt!=0){
            mul= mul*rem;
            cnt--;
        }
        result = result+mul;
        cnt = count;
        q = q/10;
        mul = 1;
    }
    if(result==n){
        printf("%d is an armstrong number",n);
    } else {
        printf("%d is an not armstrong number",n);
    }
}
