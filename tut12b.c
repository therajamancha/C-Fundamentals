#include<stdio.h>
int main(){
    // 2d arry in c launguge
    int i,j,a[2][4]={{12,45,63,78},
             {75,94,85,12}};
    for (i = 0; i < 2; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
    
}