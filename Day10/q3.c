#include<stdio.h>
void main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    //Lower Pyramid
    for (int i=n-1; i>=0; i--)
    {  
        //Character 1
        for (int j = 0; j<=i; j++)
            printf("T");
        //Post Space 1
        for (int j = 0; j<n-i-1; j++)
            printf(" ");      
        //Character 2
        for (int j = 0; j<=i; j++)
            printf("T");
        //Post Space 2
        for (int j = 0; j<n-i-1; j++)
            printf(" ");      
        //Character 3
        for (int j = 0; j<=i; j++)
            printf("T");
        //Post Space 3
        for (int j = 0; j<n-i; j++)
            printf(" ");      
        printf("\n");
    }
    
}