#include <stdio.h>

void multiply(int m, int n){
    //create
    int temp[m][n], arr1[m][n], arr2[m][n];
    printf(" the elements for matrix 1: ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr1[i][j] = i * j * i+1;
        }
    }
    //display
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf(" the elements for matrix 2: ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr2[i][j] = i * j * j+1;
        }
    }
    //display
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
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
    printf("Enter the matrix order: ");
    scanf("%d", &m);
    scanf("%d", &n);
    multiply(m, n);
}
