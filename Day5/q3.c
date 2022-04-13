#include <stdio.h>

void main(){
    int R1, R2, R3;
    float V, Is, Ip, Rs, Rp;
    printf("Enter the voltage: ");
    scanf("%f", &V);    
    printf("Enter the resistances: ");
    scanf("%d", &R1);    
    scanf("%d", &R2); 
    scanf("%d", &R3); 
    Rs = R1 + R2 + R3;
    float temp = (1/R1) + (1/R2) + (1/R3);
    Rp = 1.0/temp;
    Is = V/Rs;
    Ip = V/Rp;
    printf("The current in series is: %f flowing through a resistance of: %f\n", Is, Rs);
    printf("The current in parallel is: %f flowing through a resistance of: %f\n", Ip, Rp);
}