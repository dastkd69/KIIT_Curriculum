#include<stdio.h>

void main(){
    int num, t, flag = 1;
    printf("Enter the number: ");
    scanf("%d",&num);
    t = num/2;
    for (int i=2; i<=t; i++)
    {
        if(!(num%i)){
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("The number is a prime number!\n");
    else
        printf("The number is a composite number!\n");
}