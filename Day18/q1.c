#include <stdio.h>

int sum(int *a, int n){
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

void main(){
    int n;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int x[n];
    printf("Enter Array elements: \n");
    for(int i = 0; i < n; i++){
        printf("Enter the element %d: ", i);
        scanf("%d", &x[i]);
    }
    printf("Sum of array is: %d\n",sum(x, n));
}