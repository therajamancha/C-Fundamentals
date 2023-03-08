#include<stdio.h>
void swap(int*,int*);
int main(){
    // call by value call by refrance
    int a,b;
    printf("Enter Two No: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a = %d b = %d",a,b);
    return 0;
}
void swap(int *x,int *y){
    // we are using pointer for change value in thair address
    int t;
    t=*x;
    *x=*y;
    *y=t;
}