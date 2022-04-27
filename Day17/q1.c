#include <stdio.h>

void main() {
    int a[8] = {0,1,2,3,4,5,6,7};
    printf("%p\n", &a);
    printf("%p\n", *(&a));
    printf("%d\n", *a);
    printf("%d\n", *(a+1));
}