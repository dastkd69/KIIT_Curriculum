#include <stdio.h>
#include <string.h>

void main(){
    char input[100];
    printf("Enter the string: ");
    gets(input);
    int length = 0, i = 0, flag = 1;
    for(;input[length];length++);
    while(input[i]){
        if(input[i] != input[length-i-1])
            flag = 0;
        i++;
    }
    flag?printf("The string is a palindrome!\n"):printf("The string is not a palindrome!\n");
}