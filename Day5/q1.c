#include <stdio.h>

void main(){
    int N1, N2;
    float V1, V2;
    printf("Enter the primary voltage: ");
    scanf("%f", &V1);    
    printf("Enter the primary turns: ");
    scanf("%d", &N1);    
    printf("Enter the secondary turns: ");
    scanf("%d", &N2);
    V2 = (V1 * N2)/N1;
    printf("The secondary voltage is: %f\n", V2);
}