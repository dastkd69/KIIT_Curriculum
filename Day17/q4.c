#include <stdio.h>

void main() {
    int a = 2, *p;
    p = &a;
    printf("%p\n", &p);
}