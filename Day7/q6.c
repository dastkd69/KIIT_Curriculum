#include <stdio.h>

void main(){
    float x1, x2, y1, y2, x3, y3;
    printf("Enter the coordinates for line 1: ");
    scanf("%f", &x1);
    scanf("%f", &y1);
    printf("Enter the coordinates for line 2: ");    
    scanf("%f", &x2);
    scanf("%f", &y2);
    printf("Enter the coordinates for line 3: ");
    scanf("%f", &x3);
    scanf("%f", &y3);
    if(((y2-y1)/(x2-x1)) == ((y3-y2)/(x3-x2)))
        printf("Not a Triangle!\n");
    else
        printf("Is a Triangle!\n");                    
}
