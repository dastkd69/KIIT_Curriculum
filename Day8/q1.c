#include<stdio.h>

void main(){
    char username;
    int password;
    printf("Enter the username: ");
    scanf("%c", &username);
    printf("Enter the password: ");
    scanf("%d", &password);
    if (username == 'a'){
        if (password == 12345)
            printf("You've logged in successfully!\n");
        else
            printf("You have entered incorrect credentials.\n");  
    }
    else
    printf("You have entered incorrect credentials.\n");    
}