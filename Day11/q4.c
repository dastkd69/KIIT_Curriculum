#include <stdio.h>

void main(){
    float n1, n2;
    char operation;
    printf("Enter two integers: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    printf("Enter your operation (+, -, *, /, %%): ");
    scanf(" %c", &operation);
    switch (operation)
    {
    case '+':
        printf("The sum is: %f\n", n1+n2);
        break;
    case '-':
        printf("The difference is: %f\n", n1-n2);
        break;
    case '*':
        printf("The product is: %f\n", n1*n2);
        break;
    case '/':
        printf("The quotient is: %f\n", n1/n2);
        break;
    case '%':
        printf("The modulus is: %d\n", (int)n1%(int)n2);
        break;    
    default:
        printf("Unsupported Operation!!\n");
        break;
    }
}