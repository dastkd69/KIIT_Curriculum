#include <stdio.h>

int data_read(int arr[20][20]){
    FILE *f;
    f = fopen("q1.txt", "r");
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++)
            fscanf(f, "%d", &arr[i][j]);
    }
    fclose(f);
    return 0;
}

void main(){
    int arr[20][20], sum=0;
    printf("Reading file data.in...\n");
    data_read(arr);
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++)
            sum += arr[i][j];
    }
    printf("The sum of the elements is: %d\n", sum);
}