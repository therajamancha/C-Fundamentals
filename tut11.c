#include<stdio.h>
int sum(int);
int main(){
    // function call it self is called recurstion
    int k;
    k=sum(3);
    printf("%d",k);
}
int sum(int a){
    int s;
    if(a==1)
        return (a);
        s=a+sum(a-1);
        return (s);
}