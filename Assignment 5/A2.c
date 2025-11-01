#include<stdio.h>
#include<conio.h>
void main(){
    char s[100];
    printf("Please enter the string: ");
    scanf("%s", s);

    int pal = 1;
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    for(int i = 0; i<len/2; i++){
        if (s[i] != s[len - i - 1]) {
            pal = 0;
            break;
        }
    }
    if (pal == 1){
        printf("Palindrome String");
    } else {
        printf("Not a Palindrome String");
    }

}
