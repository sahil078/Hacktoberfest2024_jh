#include<stdio.h>

int main(){
     int i , j ,num ,a=65;
    printf("enter the number of rows");
    scanf("%d" , &num);
    for(i=1; i<=num ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf("%c " ,a);
        
        }
        a=a+1;
        printf("\n");
    }
    return 0;
}