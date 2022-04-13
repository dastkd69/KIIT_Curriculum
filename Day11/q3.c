#include <stdio.h>

void line(char ch, int length){
    printf("\n");
    for(int i=0; i<length; i++)
        printf("%c", ch);
    printf("\n\n");
    return;
}

void main(){
    int length;
    char ch;
    printf("Enter the character you want to print: ");
    scanf("%c", &ch);
    printf("Enter the length of the line: ");
    scanf("%d", &length);
    line(ch, length);
}