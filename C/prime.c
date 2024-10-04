#include<stdio.h>

int main(){
    int i =2 , num ;
    printf("enter the number");
    scanf("%d" , &num);
    for (i = 2 ; i<=num-1 ;i++)
    {
        if (num%i==0)
        {
        printf("no is not prime");
        break;}
        else if (i==num-1){
        printf("no is prime");}
    }
    
    return 0;
}