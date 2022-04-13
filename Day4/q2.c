#include <stdio.h>

#define area(a) 3.14 * a;
#define sqr(a) a*a;

int main(){
    float radius;
    printf("Enter radius:\t");
    scanf("%f", &radius);
    float square = sqr(radius);
    float area = area(square);
    printf("Area is:\t%f\n", area);
    return 0;
}