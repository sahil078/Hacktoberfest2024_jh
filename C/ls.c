#include <stdio.h>
int linear_searching(int arr[], int x, int N)
{
for (int i = 1; i <= N; i++)
{
if (arr[i] == x)
{
return i;
}
return -1;
}
}
int main()
{
int arr[] = {6, 9, 4, 7, 5, 1};
int x = 5;
int N = sizeof(arr) / sizeof(int);
int searchIndex = linear_searching(arr, x, N);
printf("The element %d was found at index %d \n", x, searchIndex);
return 0;
}
