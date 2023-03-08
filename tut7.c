#include<stdio.h>
int main(){
    // if else if lader
    int marks;
    printf("Enter Your Marks :");
    scanf("%d",&marks);
    if (marks>90)
    {
        printf("Grade - A");
    }else if (marks>70)
    {
        printf("Grade - B");
    }else if (marks>50)
    {
        printf("Grade - C");
    }else if(marks>30){
        printf("Grade - D");
    }else{
        printf("Fail");
    }
}