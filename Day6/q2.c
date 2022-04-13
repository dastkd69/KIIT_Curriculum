#include <stdio.h>

void main(){
    int a, b, c;
    printf("Enter the sides of the triangle: ");
    scanf("%d", &a);    
    scanf("%d", &b); 
    scanf("%d", &c);
    int t = ((a+b)>c) && ((a+c)>b) && ((b+c)>a);
    printf("Your sum is: %d\n", t*(a+b+c));
}