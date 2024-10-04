#include <stdio.h>

int main()
{
    int arry[10];
    int i = 0;
    int max = 0;
    for (i = 0; i < 10; i++)
    {
        printf("enter element no %d: ", i + 1);
        scanf("%d", &arry[i]);
       // if(max<arry[i])
       //z {
        //    max=arry[i];
       // }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arry[i]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        if (arry[i] > max)
        {
            max = arry[i];
        }
    }
    printf("the maximum element in the array is : %d", max);

    return 0;
}