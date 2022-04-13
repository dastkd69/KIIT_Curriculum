#include <stdio.h>

void main(){
    int total;
    printf("Enter total marks out of 100: ");
    scanf("%d", &total);
    switch (total/10)
    {
    case 9:
        printf("Grade O\n");
        break;
    case 8:
        printf("Grade E\n");
        break;
    case 7:
        printf("Grade A\n");
        break;
    case 6:
        printf("Grade B\n");
        break;
    case 5:
        printf("Grade C\n");
        break;    
    case 4:
        printf("Grade D\n");
        break;    
    default:
        printf("Failed!\n");
        break;
    }
}