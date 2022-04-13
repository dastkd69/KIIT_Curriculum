#include <stdio.h>

void main(){
    float h, p, b;
    printf("Enter the base: ");
    scanf("%f", &b);
    printf("Enter the perpendicular: ");
    scanf("%f", &p);
    printf("Enter the hypotenuse: ");
    scanf("%f", &h);
    int t = h*h == p*p + b*b;                    //temporary variable for readability
    printf("Your value is: %d\n", t);
}
