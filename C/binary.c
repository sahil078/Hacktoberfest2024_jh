#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
    if (high<low)
    {
        printf("Not sorted ");
    }
    
  if (high >= low) {
    int mid = low + high / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    else
        return binarySearch(array, x, mid + 1, high);
  }

  return 0;
}

int main() {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 5;
  int result = binarySearch(array, x, 0, n + 1);
  if (result == 0)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
    return 0;
    }
