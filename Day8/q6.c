#include<stdio.h>

void main(){
    int i = 1, topper;
    float maths, chem, bio, com, eg, avg, max = 0;
    loop:
    printf("Details for Student %d\n", i);
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
    if(avg>max){
        max = avg;
        topper = i;
    }
    i++;
    if(i<=8)
        goto loop;
    printf("The topper is: %d\n", topper);
}