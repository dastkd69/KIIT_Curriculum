#include <stdio.h>
#include <math.h>
#define pi 3.14
#define g 9.8

void main(){
    int length = 0, time;
    
    length += 10;
    time = 2 * pi * sqrt(length/g);         
    printf("Time for length %d is: %d\n", length, time);

    length += 10;
    time = 2 * pi * sqrt(length/g);         
    printf("Time for length %d is: %d\n", length, time);

    length += 10;
    time = 2 * pi * sqrt(length/g);         
    printf("Time for length %d is: %d\n", length, time);

    length += 10;
    time = 2 * pi * sqrt(length/g);         
    printf("Time for length %d is: %d\n", length, time);
    
    length += 10;
    time = 2 * pi * sqrt(length/g);         
    printf("Time for length %d is: %d\n", length, time);
}
