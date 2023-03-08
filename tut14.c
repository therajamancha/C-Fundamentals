#include<stdio.h>
int main(){
    // Extendet Concept of Pointers In C Language
    int x=6,*j,**z,w;
    j=&x;
    z=&j;
    // NULL pointer
    // w=NULL;
    printf("the address of %d is %u\n",x,&x);
    printf("the value stored in x is = %d\nand pointer *j is same as x = %u\n",x,*j);
    printf("the value stored in *&j is address of x = %u\n",*&j);
    printf("the value stored in j is address of x = %u\n",j);
    printf("the value stored in z is address of j = %u\n",z);
    printf("z is pointer to pointer j");
    printf("w is NULL pointer =  %u",w);
    return 0;
}