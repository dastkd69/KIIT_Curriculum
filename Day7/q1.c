#include <stdio.h>

void main(){
    int grace_marks = 40, age, marks;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(age<50)
        grace_marks+=20;                    
    printf("Your marks is: %d\n", marks+grace_marks);
}
