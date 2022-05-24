#include <stdio.h>

void main(){
    char arr[20];
    printf("Reading file data.in...\n");
    FILE *f;
    f = fopen("q3.txt", "r");
    fgets(arr, sizeof(arr), f);
    puts(arr);
    fclose(f);
}