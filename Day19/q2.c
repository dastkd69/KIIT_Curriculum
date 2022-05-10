#include <stdio.h>

void main(){
    char *p[5];
    char a[] = "Pokemon", b[] = "Doraemon", c[] = "Digimon", d[] = "Paimon", e[] = "Lemon";
    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;
    p[4] = e;
    int count = 0, total = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; p[i][j]; j++){
            if(p[i][j] == 'a')
                count++;
        }
        printf("%s contains %d 'a' characters.\n", p[i], count);
        total += count;
        count = 0;
    }
    printf("The total number of times 'a' occurs in these names are: %d\n", total);
}