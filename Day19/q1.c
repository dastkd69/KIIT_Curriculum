#include <stdio.h>

void main(){
    char *p[5];
    char a[] = "Pokemon", b[] = "Doraemon", c[] = "Digimon", d[] = "Paimon", e[] = "Lemon";
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;
    p[4] = e;
    printf("Introducing Team Mon:\n");
    for(int i = 0; i < 5; i++){
        printf("%s\n", p[i]);
    }
}