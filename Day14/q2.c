#include<stdio.h>

void marks(int arr[20]){
    int count=0, sum=0;
    float avg;
    for(int i = 0; i<20; i++){
        if (arr[i]>90)
            count++;
        sum+=arr[i];
    }
    avg = sum/20.0;
    printf(" Total Marks is: %d\n Average Marks is: %f!\n Number of Students Who Scored Above 90: %d\n",sum, avg, count);
}

void main(){
    int arr[20];
    for(int i = 0; i<20; i++){
        printf("Enter the marks for Student %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    marks(arr);
}