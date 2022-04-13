#include<stdio.h>

void main(){
    float maths, chem, bio, com, eg, avg;
    printf("Enter your Maths score: ");
    scanf("%f", &maths);
    printf("Enter your Chemistry score: ");
    scanf("%f", &chem);
    printf("Enter your Biology score: ");
    scanf("%f", &bio);
    printf("Enter your Professional Communications score: ");
    scanf("%f", &com);
    printf("Enter your Engineering Graphics score: ");
    scanf("%f", &eg);
    avg = (maths + chem  + bio + eg + com)/5.0;
    if (avg>39){
        if (avg>49){
            if (avg>59)
                printf("First Grade!\n");
            else
                printf("Second Grade!\n");
        }
        else
            printf("Third Grade!\n");
    }
    else
        printf("You have Failed!\n");
}