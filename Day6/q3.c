#include <stdio.h>

void main(){
    float x1, x2, y1, y2;
    printf("Enter the coordinates of first line: ");
    scanf("%f", &x1);    
    scanf("%f", &y1);
    printf("Enter the coordinates of first line: "); 
    scanf("%f", &x2);
    scanf("%f", &y2);
    int t = (y1/x1) * (y2/x2) * -1;                     //temporary variable for readability
    printf("Your value is: %d\n", t);
}
