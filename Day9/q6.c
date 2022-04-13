#include<stdio.h>

void main(){
    int a, b, c, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    a = 1;
    b = 1;
    printf("%d\n", a);
    printf("%d\n", b);
    n-=2;
    for (int i = 0; i<n; i++)
    {
        c = a+b;
        printf("%d\n", c);
        a = b;
        b = c;
    }
    
}