#include<stdio.h>
// intilition of function
void add();
int main(){
    // function in c-launguge
    // function call
    add();
    add();
}
// function declartion
void add(){
        int a,b,c;
    printf("\nEnter Two number : ");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("sum is :%d",c);
}