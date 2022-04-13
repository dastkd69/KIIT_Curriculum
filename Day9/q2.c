#include<stdio.h>

void main(){
    int sum = 0, count=0, temp;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf("%d",&temp);
        count += temp%2;
        sum += temp%2*temp;
    }
    printf("The count is: %d and the sum is: %d\n", count, temp);
}