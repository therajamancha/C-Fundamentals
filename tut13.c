#include<stdio.h>

void myFun(char str[]){
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}
int main(){
    // string is charcter arry in c launguge it is not a DATA Type
    // null carcter's ASCII value is ZERO
    char myName[]= {'r','a','j','e','\0'};
    // char name[6]= "hello";
    // printf("%s\t",name);
    // printf("%s",myName);
    myFun(myName);
    return 0;
}