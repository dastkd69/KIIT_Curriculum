#include <stdio.h>

void main(){
    float n1, n2;
    int operation;
    printf("Enter two integers: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    printf("Enter your operation\n1 for Addition\n2 for Substraction\n3 for Multiplication\n4 for Division\n:5 for Modulus\n");
    scanf(" %d", &operation);
    switch (operation)
    {
    case 1:
        printf("The sum is: %f\n", n1+n2);
        break;
    case 2:
        printf("The difference is: %f\n", n1-n2);
        break;
    case 3:
        printf("The product is: %f\n", n1*n2);
        break;
    case 4:
        printf("The quotient is: %f\n", n1/n2);
        break;
    case 5:
        printf("The modulus is: %d\n", (int)n1%(int)n2);
        break;    
    default:
        printf("Unsupported Operation!!\n");
        break;
    }
}