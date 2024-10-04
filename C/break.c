#include<stdio.h>

int main(){
    int i = 2 , num ;
    printf("enter theb num");
    scanf("%d" ,&num);
    while (i<=(num-1)/2)
    {
        if (num%i==0)
        {
        printf("not prime\n");
        break ;
        }
        
     
        else if (i == (num-1)/2){
        printf("number is prime");}
         i++;
       
    
    }

    return 0;
}