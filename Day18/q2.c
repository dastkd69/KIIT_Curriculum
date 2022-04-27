#include <stdio.h>

void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void main(){
    int x, y;
    printf("Enter the values: \n");
    scanf("%d", &x);
    scanf("%d", &y);
    swap(&x, &y);
    printf("Swapped Values are: %d\t%d\n", x, y);
}