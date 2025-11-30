#include <stdio.h>
#include <stdlib.h>

extern int externVar;
int externVar = 50;

void staticDemo() {
    static int count = 0;
    count++;
    printf("Static variable value: %d\n", count);
}

void main() {
    auto int a = 10;
    register int r = 5;

    printf("Auto variable a = %d\n", a);
    printf("Register variable r = %d\n", r);
    printf("Extern variable externVar = %d\n", externVar);

    staticDemo();
    staticDemo();
    staticDemo();

    int *p, *q;
    int n = 5;

    printf("\nDynamic Memory Allocation:\n");
    p = (int*)malloc(n * sizeof(int));
    printf("\nUsing malloc:\n");
    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
        printf("p[%d] = %d\n", i, p[i]);
    }
    q = (int*)calloc(n, sizeof(int));
    printf("\nUsing calloc (starts at 0):\n");
    for (int i = 0; i < n; i++) {
        printf("q[%d] = %d\n", i, q[i]);
    }
    p = (int*)realloc(p, 10 * sizeof(int));
    printf("\nAfter realloc (size increased):\n");
    for (int i = 5; i < 10; i++) {
        p[i] = (i + 1) * 10;
    }
    for (int i = 0; i < 10; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }
    free(p);
    free(q);
}
