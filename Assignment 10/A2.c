#include <stdio.h>

void main() {
    FILE *fp;
    fp = fopen("tsec.txt", "w");
    printf("Enter text to append into the file(type a . when it is over):\n");
    char ch;
    while (ch != '.'){
        fputc(ch, fp);
        scanf("%c", &ch);
    }
    fclose(fp);
    printf("Text written successfully");
}
