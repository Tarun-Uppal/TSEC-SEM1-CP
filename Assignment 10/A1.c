#include <stdio.h>

void main() {
    FILE *fp;
    char ch;

    fp = fopen("tsec.txt", "r");
    while ((ch = fgetc(fp)) != -1) {
        putchar(ch);
    }
    fclose(fp);
}

