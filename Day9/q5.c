#include <stdio.h>
#include <math.h>
#define pi 3.14
#define g 9.8

void main(){
    float length = 0.0, time;
    for (int i = 0; i < 5; i++)
    {
        length += 10;
        time = 2 * pi * sqrt(length/g);         
        printf("Time for length %f is: %fs\n", length, time);
    }
}