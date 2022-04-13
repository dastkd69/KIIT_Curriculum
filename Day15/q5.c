#include <stdio.h>

// int create_matrix(int m, int n){
//     int arr[m][n], scalar;
//     printf("Enter the elements of the matrix at\n");
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             printf("Element at [%d][%d]: ", i, j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     return arr;
// }

void main(){
    int arr1[4][4], arr2[4][4], scalar;
    printf("Enter the elements of the matrix 1\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elements of the matrix 2\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("The element at [%d][%d] is: %d\n", i, j, arr1[i][j]+arr2[i][j]);
        }
    }
}