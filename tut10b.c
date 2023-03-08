#include<stdio.h>
// finction declartion
void add(int,int);
int main(){
    // take somthing return nothing
    int x, y;
    printf("Enter a Two No :\n");
     scanf("%d %d",&x,&y);
    add(x,y);
}
void add(int a,int b){
    int c;
    c=a+b;
    printf("Sum is %d",c);
}