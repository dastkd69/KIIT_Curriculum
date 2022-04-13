#include <stdio.h>

void sum(int n1, int n2){
    printf("Sum is: %d\n", n1+n2);
    return;
}

void main(){
    int n1, n2;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    sum(n1, n2);
}