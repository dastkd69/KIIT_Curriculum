#include<stdio.h>

void main(){
    int i = 0;
    float sum, temp;
    loop:
    printf("Enter score of cricketer %d: ", ++i);
    scanf("%f", &temp);
    sum += temp;
    if (i<11)
        goto loop;
    printf("The average score of the cricketers is: %f\n", sum/11.0);
}