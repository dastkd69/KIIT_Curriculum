#include <stdio.h>

int data_write(int n){
    FILE *f;
    f = fopen("data.txt", "w");
    fclose(f);
    f = fopen("data.txt", "a");
    for(int i=0; i<20; i++){
        for(int j=0; j<19; j++)
            fprintf(f, "%d\t", i*j+3);
        fprintf(f, "%d\t\n", n);
    }
    fclose(f);
    return 0;
}

int data_read(int arr[20][20]){
    FILE *f;
    f = fopen("data.txt", "r");
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++)
            fscanf(f, "%d", &arr[i][j]);
    }
    fclose(f);
    return 0;
}

void main(){
    printf("Enter the last column value: \n");
    int ch;
    scanf("%d", &ch);
    printf("Creating file data.in...\n");
    data_write(ch);
    printf("Successfully created file!\n");
    int arr[20][20], sum=0;
    data_read(arr);
    printf("Reading file data.in...\n");
    for(int i=0; i<20; i++){
        sum += arr[i][19];
    }
    printf("The sum of the last column is: %d\n", sum);
}

