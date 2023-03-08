#include<stdio.h>
int add(int,int);
int main(){
    // take somthing return somthing
    int a,b,c;
    printf("Enter Two no:");
    scanf("%d %d",&a,&b);
    c=add(a,b);
    printf("the sum is %d",c);
}
int add(int x,int y){
    int z;
    z=x+y;
    return(z);
}