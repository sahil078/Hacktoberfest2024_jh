#include<stdio.h>

int main(){
    int i , j  , flag =0;
    for(i=20 ; i<=50 ; i++)
    {
        flag = 0 ;
        for(j=2 ; j<i ; j++)
        {
            if(i%j!=0)
            flag++;
            break;
        }
      if(flag != 0)
      printf("%d " ,i);
    }
    return 0;
}