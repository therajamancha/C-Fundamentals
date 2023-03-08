#include<stdio.h>
int main(){
    // this is collection of data wich is same data type
    // data type arry cretated
    // array value initiliztion
    // marks[0]=98;
    // marks[1]=100;
    // marks[2]=88;
    // marks[3]=87;
    // printing value of array
    // printf("Marks of Student 1 is:%d\n",marks[0]);
    // printf("Marks of Student 2 is:%d\n",marks[1]);
    // printf("Marks of Student 3 is:%d\n",marks[2]);
    // printf("Marks of Student 4 is:%d\n",marks[3]);
    int marks[4];
    for (int i = 1; i <= 4; i++)
    {
        printf("Enter student %d marks:",i);
        scanf("%d",&marks[i]);
    }
    for (int j = 1; j <=4; j++)
    {
        printf("student no:%d marks is:%d\n",j,marks[j]);
    }
    
    
    return 0;
}