#include<stdio.h>

void main(){
    int num, digit, sum=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(num>0){
        digit = num%10;
        num = num/10;
        sum += digit;
    }
    printf("The sum of digits is: %d\n", sum);
}