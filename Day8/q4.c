#include<stdio.h>

void main(){
    int i = 1, count, temp;
    loop:
    printf("Enter score of cricketer %d: ", i);
    scanf("%d", &temp);
    if(temp<0)
        goto loop;
    count += temp>=100;
    i++;
    if (i<=11)
        goto loop;
    printf("The number of cricketers who scored a century is: %d\n", count);
}