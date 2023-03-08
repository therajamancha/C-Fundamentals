#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="Raj";
    char s2[]="Ravi";
    char s3[30];
    // concat two string
    // puts(strcat(s1,s2));

    // The length of string
    printf("the length of sting is : %d\n",strlen(s1));

    // The Reverse of string
    printf("the Reverse of sting is : ");
    puts(strrev(s1));

    // Copy string to New string
    strcpy(s3,s2);
    printf("this is copy of s2 : ");
    puts(s3);

    // string Lower 
    printf("this is UpperCase : ");
    puts(strupr(s3));

    // sting lower
    printf("this is lowerCase : ");
    puts(strlwr(s3));

    // sting compare 
    printf("this is compare Between Strings : %d",strcmp(s1,s2));
    return 0;
}