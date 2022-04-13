#include <stdio.h>

void multiply(int m, int n){
    //create
    int temp[m][n], arr1[m][n], arr2[m][n];
    printf("Enter the elements for matrix 1: ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements for matrix 2: ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    //multiply
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int sum = 0;
            for(int k=0; k<m; k++)
                sum += (arr1[i][k] * arr2[k][j]);
            temp[i][j] = sum;
        }
    }

    //display
    printf("The multiplied matrix is: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d\t", temp[i][j]);
        }
        printf("\n");
    }
    
}


void main(){
    int m, n;
    printf("Enter the matrix 1 order: ");
    scanf("%d", &m);
    scanf("%d", &n);
    multiply(m, n);
}