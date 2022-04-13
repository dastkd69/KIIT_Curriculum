#include <stdio.h>

void main(){
    int arr[3][4], scalar;
    printf("Enter the elements of the matrix at\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter scalar: ");
    scanf("%d",&scalar);
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("The element at [%d][%d] is: %d\n", i, j, arr[i][j]*scalar);
        }
    }
}
