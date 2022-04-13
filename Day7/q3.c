#include <stdio.h>

void main(){
    float R1, R2, R3, R4;
    printf("Enter the stable resistances: ");
    scanf("%f", &R1);
    scanf("%f", &R2);
    scanf("%f", &R3);
    printf("Enter the variable resistance: ");
    scanf("%fS", &R4);
    if(R1*R4 == R2*R3)
        printf("Wheatstone bridge is balanced!\n");
    R4 = (R2 * R3)/R1;
    printf("Bridge is not balanced. Take variable resistance as: %f\n", R4);                    
}
