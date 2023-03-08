#include<stdio.h>
// function declartion
void add();
int main(){
    // take nothing return nothing
    // function call
    add();
}
// function defination
void add(){
    int a,b,c;
    printf("Enter a Two No :\n");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("The Sum of %d %d is : %d",a,b,c);
}
    