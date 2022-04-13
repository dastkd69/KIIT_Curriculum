#include <stdio.h>

void main(){
    unsigned short a = 0xFFFF;
    a = ~( a ^ ( a<<4 ) );
    printf("%x", a);
}