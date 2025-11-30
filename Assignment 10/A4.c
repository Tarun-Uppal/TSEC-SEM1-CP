#include <stdio.h>

void main() {
    FILE *source, *dest;
    char ch;
    source = fopen("tsec.txt", "r");
    dest = fopen("tsec1.txt", "w");
    while ((ch = fgetc(source)) != -1) {
        fputc(ch, dest);
    }
    printf("File copied successfully!\n");
    fclose(source);
    fclose(dest);
}
