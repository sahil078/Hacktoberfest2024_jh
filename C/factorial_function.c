#include <stdio.h>
int natural(int a)
{
    int sum = 0  ;
    if(a>0){

    
    sum = sum + a + natural(a-1) ;
    return sum;}
}
int main ()
{
    int n = 25 , f;
   
    f = natural(n);
    printf("the sum of natural no is %d " , f);
    return 0;
}