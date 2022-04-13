#include <stdio.h>

int main(){
    int a=10,b=5;
    int p;
    p= b++ + --a;
    printf("p = %d, a = %d, b = %d\n", p, a, b);
    return 0;
}