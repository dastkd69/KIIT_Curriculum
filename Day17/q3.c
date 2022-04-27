#include <stdio.h>

void main() {
    int a[8] = {0,1,2,3,4,5,6,7}, *p;
    for (int i = 0; i < 8; i++){ 
        p = a+i;
        printf("%p\n", p);
    }
    printf("Outside Element: %p\n", &a+1);
}