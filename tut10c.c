#include<stdio.h>
int add(void);
int main(){
    // take nothing return somthing 
    int a;
    a=add();
    printf("Sum id %d",a);
}
int add(){
    int a,b,c;
    printf("Enter a No:");
    scanf("%d %d",&a,&b);
    c=a+b;
    return (c);
}