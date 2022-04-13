#include <stdio.h>

void main(){
    float bsalary, gsalary;
    printf("Enter the basic salary: ");
    scanf("%f", &bsalary);
    if(bsalary<1500)
        gsalary = 0.1 * bsalary + 0.4 * bsalary + bsalary;
    gsalary = 500 + 0.5 * bsalary + bsalary;
    printf("Your gross salary is: %f\n", gsalary);                    
}
