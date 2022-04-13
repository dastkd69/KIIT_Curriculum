#include <stdio.h>

void sum(int num){
    int sum, digit;
    while(num>0){
        digit = num%10;
        num = num/10;
        sum += digit;
    }
    printf("The sum of digits is: %d\n", sum);
    return;
}

void main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    sum(num);
}