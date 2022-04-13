#include <stdio.h>

void main(){
    float accel;
    printf("Enter the acceleration: ");
    scanf("%f", &accel);
    if(accel==0.0)
        printf("Car is at constant velocity.\n");
    else if(accel>0.0)
        printf("Car is accelerating!\n");
    else
        printf("Car is decelerating!\n");                    
}

