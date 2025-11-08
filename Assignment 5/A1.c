#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char s[100], c[100];
    printf("Please enter the string: ");
    gets(s);
    int len = strlen(s);
    printf("Length %d\n", len);
    strcpy(c, s);
    printf("Copy is %s\n", c);
    strcat(c, s);
    printf("The concated string is (C is changed) %s\n", c);
    if (strcmp(c, s) == 0)
        printf("The String are same\n");
    else if (strcmp(c, s) > 0)
        printf("The String c is greater than s\n");
    else
        printf("The String s is grater than c\n");
    strrev(s);
    printf("The reversed String is: %s", s);
}
