#include <stdio.h>

int main(){
    int a=5,b=10;
    int x, y;
    x = a++ + --b;
    y = ++a + b--;
    printf("x = %d, y = %d, a = %d, b = %d\n", x, y, a, b);
    return 0;
}