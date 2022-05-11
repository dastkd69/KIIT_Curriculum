#include <stdio.h>
#include <string.h>

void main(){
    char input[100], pattern[4];
    printf("Enter the string: ");
    gets(input);
    printf("Enter the pattern to find: ");
    gets(pattern);
    //debug
    puts(pattern);
    int i = 0, flag = 1, pos = 1;

    while(input[i]){
        for(int j =0; pattern[j]; j++){
            if(input[i+j] == pattern[j])
                flag = 1;
            else
                flag = 0;
        }
        if(flag){
            pos = i;
            break;
        }
        i++;
    }
    flag?printf("The pattern is present in the string at %d!\n", pos):printf("The pattern is not present in the string!\n");
}