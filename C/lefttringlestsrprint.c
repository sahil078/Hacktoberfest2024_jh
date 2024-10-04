#include<stdio.h>

int main(){
     int i , j ,num , k ,m;
    printf("enter the number of rows");
    scanf("%d" , &num);
    for(i=0 ; i<num ; i++){
        for(j=num ; j>i ; j--)
        {
            printf(" ");
        }
      

        for (k=0 ; k<=i ;k++)
        {
            printf("*" );
        }
        for(m=0; m<i ; m++)
        {printf("*" );

        }
        printf("\n");

    }
    return 0;
}