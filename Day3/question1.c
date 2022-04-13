#include <stdio.h>

int main(){
    char charinput;
    int intinput;
    float floatinput;
    printf("Enter a character: ");
    scanf("%c", &charinput);
    printf("Enter an integer: ");
    scanf("%d", &intinput);
    printf("Enter a float: ");
    scanf("%f", &floatinput);
    printf("Integer:\t%d\n", intinput);
    printf("Float:\t%f\n", floatinput);
    printf("Character:\t%c\n", charinput);
    return 0;
}