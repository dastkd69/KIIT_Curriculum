#include<stdio.h>

void main(){
    int i,count;
    char src[100],ch;
    printf("Enter the string: ");
    scanf("%[^\n]s",src);
    printf("Enter the character: ");
    scanf(" %c",&ch);
    for(i=0; src[i]; i++){
        if(src[i]== ch)
            count++;
    }
    printf("The number of times %c occurs is:  %d\n",ch, count);
}