// #include<stdio.h>

// int factorial(int num)
// {
//     int fact=1, i;
//     for(i=1;i<=num;i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }

// int main()
// {
//     int num,result;
//     printf("Enter a number\n");
//     scanf("%d",&num);
//     result=factorial(num);
//     printf("%d",result);
//     return 0;
// }

//____________________________________________________________________________________________________________

// #include<stdio.h>

// int factorial(int* ptr)
// {
//     int fact=1, i;
//     for(i=1;i<=(*ptr);i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }

// int main()
// {
//     int num,result;
//     int *ptr;
//     ptr=&num;
//     printf("Enter a number\n");
//     scanf("%d",&num);
//     result=factorial(ptr);
//     printf("%d",result);
//     return 0;
// }

//_____________________________________________________________________________________________________________

// #include<stdio.h>

// int factorial(int* ptr)
// {
//     int fact=1, i;
//     for(i=1;i<=(*ptr);i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }

// int main()
// {
//     int num,result;
//     int *ptr;
//     ptr=&num;
//     // printf("Enter a number\n");
//     scanf("%d",&num);
//     result=factorial(ptr);
//     printf("%d",result);
//     return 0;
//_____________________________________________________________________________________________________________

// #include<stdio.h>
// int add (int a , int b , int c)
// {
//     int d = a + b + c ;
// return d ;
// }
// int main(){
//     int a = 12 , b = 16 , c = 20 , e ;
//     e = add(a , b , c);
//     printf("%d" , e);

//     return 0;
// }
//___________________________________________________________________________________________________________
/*#include <stdio.h>
int add(int *ptr, int *cbr, int *ner)
{
    int a, b, c, d;
    d = *ptr + *cbr + *ner;
    return d;
}
int main()
{
    int *ptr;
    int *cbr;
    int *ner;
    int a = 12, b = 16, c = 20, e;
    ptr = &a;
    cbr = &b;
    ner = &c;
    e = add(ptr, cbr, ner);
    printf("%d", e);

    return 0;
}*/
//__ _______________________________________________________________________________________________________________

// #include<stdio.h>

// void check (int num )
// {
//     if (num%2!=0)
//     {
//         printf("the no is odd");

//     }
//     else
//          printf("the no in even");
//          //return num;
// }
// int main(){
//     int num ,  result ;
//     printf("enter the number ");
//     scanf("%d" , &num);
//     check(num);
//     return 0;
// }
//___________________________________________________________________________________________________________
// #include<stdio.h>
// void swap (int *a)
// {
//     *a = 60 ;

// }

// int main(){
//     int a = 50 ;
//     int *ptr ;
//     ptr = &a ;
//     swap(ptr);
//     printf("%d" , a);
//     return 0;
// }
//______________________________________________________________________________________________________________
// #include<stdio.h>

// int main(){
//     int arry[6] = {15 ,21 , 54, 23 , 24, 25 };
//     int max = 0 , i ;
//     for(i = 0 ; i<6; i++)
//     {
//         if(arry[i] > max)
//         {
//             max = arry[i];

//         }

//     }
//     printf("%d" , max);
//     return 0;
// }
//_____________________________________________________________________________________________________________
// #include <stdio.h>
// int maximum(int arry[])
// {
//     int i;
//     int max = 0;
//     for (i = 0; i < 5; i++)
//     {
//         if (arry[i] > max)
//         {
//             max = arry[i];
//         }
//     }
//     return max;
// }

// int main()
// {

//     int arry[5];

//     int i = 0, result;
//     int max = 0;
//     for (i = 0; i < 5; i++)
//     {
//         printf("enter element no %d: ", i + 1);
//         scanf("%d", &arry[i]);
//     }
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d ", arry[i]);
//     }
//     printf("\n");
//     result = maximum(arry);
//     printf("the maximum number in the arry is: %d ", result);

//     return 0;
// }
//______________________________________________________________________________________________________________
// #include <stdio.h>
// void maximum(int arry[])
// {
//     int i;
//     int max = 0;
//     for (i = 0; i < 5; i++)
//     {
//         if (arry[i] > max)
//         {
//             max = arry[i];
//         }
//     }
//      printf("the maximum number in the arry is: %d ", max);
// }

// int main()
// {

// int arry[5];

// int i = 0, result;
// int max = 0;
// for (i = 0; i < 5; i++)
// {
//     printf("enter element no %d: ", i + 1);
//     scanf("%d", &arry[i]);
// }
// for (i = 0; i < 5; i++)
// {
//     printf("%d ", arry[i]);
// }
// printf("\n");
//  maximum(arry);

//     return 0;
// }
//______________________________________________________________________________________________________________
// #include <stdio.h>
// void check(int arry[])
// {
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         if (arry[i] % 2!= 0)
//         {
//             arry[i] = arry[i] + 1;
//         }
//     }
// }

// int main()
// {
//     int arry[5];

//     int i = 0;
//     for (i = 0; i < 5; i++)
//     {
//         printf("enter element no %d: ", i + 1);
//         scanf("%d", &arry[i]);
//     }
//     printf("Before Upgrading: ");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d ", arry[i]);
//     }
//     printf("\n");
//     check(arry);
//     printf("After upgrading: ");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d ", arry[i]);
//     }

//     return 0;
// }
//_______________________________________________________________________________________________________________
// #include<stdio.h>

// int main(){
//     int arry[2][3];
//     int r , c , p ;
//     for(r=0 ; r<2 ; r++)
//     {
//         for(c=0 ; c<3 ; c++)
//         {
//             scanf("%d" , &arry[r][c]);
//         }
//     }
//     for(r=0 ; r<2 ; r++)
//     {
//         for(c=0 ; c<3 ; c++)
//         {
//             printf("%d " ,arry[r][c]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
//______________________________________________________________________________________________________________
// #include<stdio.h>

// int main(){
//     int arry[2][3];
//     int r , c , p ;
//     for(r=0 ; r<2 ; r++)
//     {
//         for(c=0 ; c<3 ; c++)
//         {
//             scanf("%d" , &arry[r][c]);
//         }
//     }
//     for(r=0 ; r<2 ; r++)
//     {
//         for(c=0 ; c<3 ; c++)
//         {
//             printf("%d " ,arry[r][c]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
//_____________________________________________________________________________________________________________

// #include <stdio.h>
// void matrix(int arry[3][3])
// {
//     int r;
//     int c;
//     for (r = 0; r < 3; r++)
//     {
//         for (c = 0; c < 3; c++)
//         {
//             scanf("%d", &arry[r][c]);
//         }
//     }
//     for (r = 0; r < 3; r++)
//     {
//         for (c = 0; c < 3; c++)
//         {
//             printf("%d ", arry[r][c]);
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int arry[3][3];
//     int r, c, p;
//     matrix(arry);

//     return 0;
// }
//_____________________________________________________________________________________________________________
// #include<stdio.h>

// int main(){
//     int arry[3][3];
//     int r , c , p ;
//     for(r=0 ; r<3 ; r++)
//     {
//         for(c=0 ; c<3 ; c++)
//         {
//             scanf("%d", &arry[r][c]);
//         }
//     }

//     for(r=0 ; r<3 ; r++)
//     {
//         for(c=0 ; c<3 ; c++)
//         {
//             printf("%d " ,arry[r][c]);
//         }
//         printf("\n");
//     }

//     for(r=0 ; r<3 ; r++)
//     {
//         for(c=0 ; c<3 ; c++)
//         {
//             if(r==1)
//             {
//                 arry[r][c]=arry[r][c]+2;
//             }
//             if(c==2)
//             {
//                 arry[r][c]=arry[r][c]+3;
//             }
//             printf("%d " ,arry[r][c]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
//_____________________________________________________________________________________________________________
// #include <stdio.h>
// void addmatrix(int arry[3][3])
// {
//     int r, c;

//     for (r = 0; r < 3; r++)
//     {
//         for (c = 0; c < 3; c++)
//         {
//             if (r == 1)
//             {
//                 arry[r][c] = arry[r][c] + 2;
//             }
//             if (c == 2)
//             {
//                 arry[r][c] = arry[r][c] + 3;
//             }
//             printf("%d ", arry[r][c]);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int arry[3][3];
//     int r, c, p;
//     for (r = 0; r < 3; r++)
//     {
//         for (c = 0; c < 3; c++)
//         {
//             scanf("%d", &arry[r][c]);
//         }
//     }

//     for (r = 0; r < 3; r++)
//     {
//         for (c = 0; c < 3; c++)
//         {
//             printf("%d ", arry[r][c]);
//         }
//         printf("\n");
//     }
//     addmatrix(arry);
//     return 0;
// }
//_____________________________________________________________________________________________________________________________________
// #include <stdio.h>

// int main()
// {
//     int i, num, r = 0;
//     printf("enter the number till you want the sum");
//     scanf("%d", &num);
//     for (i = 1; i <= num; i++)
//     {
//         r = r + i;
//         if (i < num)
//         {
//             printf("%d+", i);
//         }
//         else
//         {
//             printf("%d", i);
//         }
//     }
//     printf("=%d", r);

//     return 0;
// }
//_____________________________________________________________________________________________________________
// #include<stdio.h>
// int fact (int num)
// {
//     if (num==0 || num==1)
//     {
//         return 1 ; 
//     }
//     return num*fact(num-1);
// }

// int main(){
//     int num  ,  result ;
//     printf("enter the number: ");
//     scanf("%d",&num);
//     result = fact(num);
// printf("%d" , result);
    
    
//     return 0;
// }
//_______________________________________________________________________________________________________________
// #include<stdio.h>
// int fact (int num)
// { int dz ;
//     if ( num == 0 || num == 1)
//     {
//         return 1 ; 
//     }
//     //dz = num*fact(num- 1);
//     //printf("%d" , dz);
//         return num*fact(num-1);
// }

// int main(){
//     int num , result ;
//     printf("enter the number");
//     scanf("%d", &num);
//     result = fact(num);
//     printf("%d", result);
//     return 0; }

