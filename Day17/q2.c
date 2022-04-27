#include <stdio.h>

void main() {
    int arr[10][10], *p;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j<10; j++)
            arr[i][j] = i;
    }

    p = *arr;
    printf("%p\n", p);
    p = *(arr+1);
    printf("%p\n", p);
    p = **(&arr);
    printf("%p\n", p);
    p = **&arr;
    printf("%p\n", p);
}