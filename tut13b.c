#include<stdio.h>
int main(){
    char username[50];
    printf("Enter Your Name:");
    gets(username);
    printf("You Enterd Your name as :");
    puts(username);
    printf("Using Printf :%s",username);
    return 0 ;
}