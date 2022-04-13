#include <stdio.h>

void main(){
    int arr[20], even = 0, odd = 0, negative = 0, positive = 0;
    printf("Enter the elements of the matrix: ");
    for(int i=0; i<20; i++){
        scanf("%d",&arr[i]);
        (arr[i]<0)?negative++:positive++;
        (arr[i]%2==0)?even++:odd++;
    }
    printf("The number of: \n positive elements are: %d\n negative elements are: %d\n even elements are: %d\n odd elements are: %d \n", positive, negative, even, odd);
}