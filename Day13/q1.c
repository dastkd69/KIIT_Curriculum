#include <stdio.h>

int sod(int n){
    return (n/10?n%10+sod(n/10):n);
}

void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("The sum is: %d", sod(n));
}