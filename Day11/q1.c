#include <stdio.h>

void main(){
    long int n, temp, rev = 0;
    printf("Enter the number: ");
    scanf("%ld", &n);
    temp = n;
    do
        rev = rev * 10 + temp%10;
    while (temp/=10);
    printf("The reverse is: %ld\n", rev);
    rev == n?printf("The number is a Palindrome!\n"):printf("The number is Not a Palindrome!\n");
}