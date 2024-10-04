 #include<stdio.h>

 int main(){
    //  int i , n  , fact = 1;
    //  printf("enter the number ");
    //  scanf("%d" ,&n);
    //  for(i=1; i<=n ; i++)
    //  {
    //     fact = fact * i;
    //  }
    // printf("%d" , fact );


    //prime no.
    int i , n ;
    printf("enter the number");
    scanf("%d" , &n);
    for(i=2 ; i<n ; i++)
    {
        if (n % i ==0)
        {
            printf("its not a prime no.");
        break;
        }
    }
if (n == i)
{
    printf("the no is prime");
}
    return 0;
}
