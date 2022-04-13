#include<stdio.h>

void swap(int n, int arr[20]){
    int temp;
    printf("The original array: \n");
    for(int i = 0; i<n; i++)
        printf("Element %d: %d\n",i+1, arr[i]);
    
    for(int i = 0; i<n; i+=2){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    printf("The swapped array: \n");
    for(int i = 0; i<n; i++)
        printf("Element %d: %d\n",i+1, arr[i]);
    return;
}

void main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    //Dummy values
    for(int i = 0; i<n; i++)
        arr[i] = i*i;
    swap(n, arr);
}