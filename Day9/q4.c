#include<stdio.h>

void main(){
    int t;
    for(int num = 1; num<=100; num++){
        int flag = 1;
        t = num/2;
        for (int i=2; i<=t; i++)
        {
            if(!(num%i)){
                flag = 0;
                break;
            }
        }
        if(flag)
            printf("The number %d a prime number!\n", num);
    }
}