#include <stdio.h>

void main(){
    int m,n;
    printf("Enter m and n: ");
    scanf("%d",&m);
    scanf("%d",&n);
    int arr2[m][n], arr1[m][n];
    printf("Enter the elements of the matrix at\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d",&arr1[i][j]);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            arr2[i][j] = arr1[m-i-1][n-j-1];
    }
    
    printf("The reverse is: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("The element at [%d][%d] is: %d\n", i, j, arr2[i][j]);
        }
    }
}
