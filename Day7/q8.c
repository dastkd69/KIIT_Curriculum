#include <stdio.h>

void main(){
    int choice1, choice2, choice3;
    printf("Enter 1 for mirror: \n");
    printf("Enter 2 for lens: \n");
    scanf("%d", &choice1);
    if(choice1==1){
        printf("Enter 1 for concave mirror\n");
        printf("Enter 2 for convex mirror\n");
        scanf("%d", &choice2);
        
        if(choice2==1){
            printf("Enter 1 for initial distance at Infity\n");
            printf("Enter 2 for initial distance at Beyond C\n");
            printf("Enter 3 for initial distance at At C\n");
            printf("Enter 4 for initial distance at Between C and F\n");
            printf("Enter 5 for initial distance at At F\n");
            scanf("%d", &choice3);

            if(choice1==1)
                printf("The image is at F and is Highly Diminished. It is Real and Inverted.\n");
            else if(choice1==2)
                printf("The image is Between F and C and is Diminished. It is Real and Inverted.\n");
            else if(choice1==3)
                printf("The image is at C and is the Same. It is Real and Inverted.\n");
            else if(choice1==4)
                printf("The image is at Beyond C and is Magnified. It is Real and Inverted.\n");
            else if(choice2==5)
                printf("The image is at Infinity and is Highly Magnified. It is Real and Inverted.\n");
            else
            printf("Invalid Entry!\n");
        }

        if(choice2==1){
            printf("Enter 1 for initial distance at Infity\n");
            printf("Enter 2 for initial distance at Beyond C\n");
            scanf("%d", &choice3);

            if(choice1==1)
                printf("The image is at F, behind the mirror and is Highly diminished. It is Virtual and Erect.\n");
            else if(choice1==2)
                printf("The image is between F and C, behind the mirror and is diminished. It is Virtual and Erect.\n");
            else
            printf("Invalid Entry!\n");
        }
    }



    else if(choice1==2){
        printf("Enter 1 for concave lens\n");
        printf("Enter 2 for convex lens\n");
        scanf("%d", &choice2);
        
        if(choice2==1){
            printf("Enter 1 for initial distance at Infity\n");
            printf("Enter 2 for initial distance at Beyond 2F1\n");
            printf("Enter 3 for initial distance at Between 2F1 and F1\n");
            printf("Enter 4 for initial distance at At F1\n");
            printf("Enter 5 for initial distance at At 2F1\n");
            printf("Enter 6 for initial distance at At F1 and 0\n");
            scanf("%d", &choice3);

            if(choice3==1)
                printf("The image is at F2 and is Diminished. It is Real and Inverted.\n");
            else if(choice3==2)
                printf("The image is Between 2F2 and F2 and is Diminished. It is Real and Inverted.\n");
            else if(choice3==3)
                printf("The image is at Beyond 2F2 and is the Magnified. It is Real and Inverted.\n");
            else if(choice3==4)
                printf("The image is at Infinity and is Magnified. It is Real and Inverted.\n");
            else if(choice3==5)
                printf("The image is at 2F2 and is Same Size. It is Real and Inverted.\n");
            else if(choice3==6)
                printf("The image is at the same side as the object and is Magnified. It is Virtual and Erect.\n");
            else
                printf("Invalid Entry!\n");
        }

        else if(choice2==2){
            printf("Enter 1 for initial distance at Infity\n");
            printf("Enter 2 for initial distance at Beyond C\n");
            scanf("%d", &choice3);

            if(choice3==1)
                printf("The image is at F, behind the mirror and is Highly diminished. It is Virtual and Erect.\n");
            else if(choice3==2)
                printf("The image is between F and C, behind the mirror and is diminished. It is Virtual and Erect.\n");
            else
            printf("Invalid Entry!\n");
        }

        else
            printf("Invalid Entry!\n");
    }

    else
        printf("Invalid Entry!\n");
}

