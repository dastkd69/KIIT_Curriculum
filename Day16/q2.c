#include <stdio.h>

void largest(int m, int n){
     int arr[m][n], max = 0;

    //create
    printf("Enter the elements for matrix: ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    //multiply
    for(int i=0; i<m; i++){
        int j = i;
        if (arr[i][j] > max)
            max = arr[i][j];
        
    }

    //display
    printf("The largest element in the matrix main diagonal is %d\n", max);
}

void main(){
    int m, n;
    printf("Enter the matrix order: ");
    scanf("%d", &m);
    scanf("%d", &n);
    largest(m, n);
}