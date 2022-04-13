#include <stdio.h>

int main(){
    int a=20,b=6;
    int p,q;
    p= --a - b;
    printf("p = %d, a = %d, b = %d\n", p, a, b);
    q= --p + p;
    printf("p = %d, a = %d, b = %d, q = %d\n", p, a, b, q);
    return 0;
}