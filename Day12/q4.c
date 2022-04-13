#include <stdio.h>

void leap(int n){
    (n%4==0) && ((n%400==0) || (n%100!=0))?printf("Is leap year"):printf("Isn't leap year");  
}

void main(){
    int y;
    printf("Enter the year: ");
    scanf("%d",&y);
    leap(y);
}