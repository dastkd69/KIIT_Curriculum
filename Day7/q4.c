#include <stdio.h>

void main(){
    int a, b, c, max;
    printf("Enter the numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    max = a;
    if(b>max){
        if(b>c)
            max = b;
    }
    else if (c>max){
        if (c>b)
            max = c;
    }
    printf("Largest number is: %d\n", max);                    
}
