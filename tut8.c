#include<stdio.h>
int main(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    switch (a)
    {
    case 2:
        printf("it is 2");
        break;
    case 3:
        printf("it is 3");
        break;
    case 4:
        printf("it is 4");
        break;
    default:
        break;
    }   
}