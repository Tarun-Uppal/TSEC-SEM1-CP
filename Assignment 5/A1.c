#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char s[100], c[100];
    printf("Please enter the string: ");
    gets(s);
    int len = strlen(s);
    strcpy(c, s);
    printf("Length %d\n", len);
    printf("Copy is %s", c);
}

