#include<stdio.h>
int main(){
    // airthmatic in pointer
    int a=34,*x;
    x=&a;
    printf("address that stored in x %u\n",x);
    printf("adress + sizeof(datatype) %u\n",x+1);

    return 0;
}