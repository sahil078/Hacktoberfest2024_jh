#include <stdio.h>

// Binary search function
int binarySearch(int array[], int x, int low, int high)
{
  while (low <= high)
  {
    int mid = low + (high - low) / 2; // Correct calculation of the median index

    // If the element is found
    if (array[mid] == x)
      return mid;

    // If the element is smaller than mid, search in the left half
    if (array[mid] > x)
      high = mid - 1;

    // Otherwise, search in the right half
    else
      low = mid + 1;
  }

  // Return -1 if the element is not found
  return -1;
}

int main()
{
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 5;

  // Call the binarySearch function
  int result = binarySearch(array, x, 0, n - 1);

  // Check the result
  if (result == -1)
    printf("Element not found\n");
  else
    printf("Element is found at index %d\n", result);

  return 0;
}
