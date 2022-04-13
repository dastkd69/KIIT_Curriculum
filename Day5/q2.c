#include <stdio.h>

void main(){
    float X1, X2, Y1, Y2, m;
    printf("Enter the first coordinates: ");
    scanf("%f", &X1);    
    scanf("%f", &Y1); 
    printf("Enter the second coordinates: ");
    scanf("%f", &X2);    
    scanf("%f", &Y2); 
    m = (float)(Y2 - Y1)/(X2 - X1);
    printf("The slope is: %f\n", m);
}