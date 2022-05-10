#include <stdio.h>

void main(){
    int a[4][5], b[4] = {0,0,0,0};
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++)
            a[i][j] = j;
    }

    int (*pa)[5], (*pb);
    pa = a;
    pb = b;

    //Display array a
    printf("The original array is: \n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            printf("%d\t", pa[i][j]);
            pb[i] = pb[i] + pa[i][j];
        }
        printf("\n");
    }

    // Display array sum in b
    printf("The summed array is: \n");
    for(int i = 0; i < 4; i++)
        printf("%d\n", pb[i]);
}