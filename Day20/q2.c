#include<stdio.h>
#include<string.h>

void main(){
    int i;
    char src[100],dst[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",src);
    for(i=0; src[i]; ++i);       
    printf("The number of characters in the string are:  %d\n",i);
}