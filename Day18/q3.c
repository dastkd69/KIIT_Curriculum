#include <stdio.h>

int sum(int *a, int *b, int n){
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++){
        sum1 += a[i];
        sum2 += b[i];
    }
    if(sum1==sum2)
        return 0;
    else if(sum1>sum2)
        return 1;
    else
        return 2;
}

void main(){
    int x[20], y[15], g;
    printf("Enter Array 1 elements: \n");
    for(int i = 0; i < 20; i++){
        printf("Enter the element %d: ", i);
        scanf("%d", &x[i]);
    }
    printf("Enter Array 2 elements: \n");
    for(int i = 0; i < 15; i++){
        printf("Enter the element %d: ", i);
        scanf("%d", &y[i]);
    }
    g = sum(x, y, 10);
    if(!g)
        printf("Both sums are equal!\n");
    else if(g==1)
        printf("Array 1 has a larger sum!\n");
    else
        printf("Array 2 has a larger sum!\n");
}