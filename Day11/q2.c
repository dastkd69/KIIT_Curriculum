#include <stdio.h>

void main(){
    int n;
    printf("Enter any number between 1 to 5: ");
    switch (scanf("%d", &n))
    {
    case 1:
        printf("You pressed %d!\n", n);
        break;
    case 2:
        printf("You pressed %d!\n", n);
        break;
    case 3:
        printf("You pressed %d!\n", n);
        break;
    case 4:
        printf("You pressed %d!\n", n);
        break;
    case 5:
        printf("You pressed %d!\n", n);
        break;    
    default:
        printf("Please press numbers between 1 to 5!\n");
        break;
    }
}