#include <stdio.h>

void main(){
    int arr[5][5], max = 0;
    printf("Enter the elements of the matrix at\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d",&arr[i][j]);
            if(arr[i][j]>max)
                max=arr[i][j];
        }
    }
    printf("The largest is: %d\n", max);
}
