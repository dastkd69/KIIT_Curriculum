#include<stdio.h>

void main(){
    int num, fact = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = num; i>0; i--)
        fact *= i;
    printf("The factorial is: %d\n", fact);
}