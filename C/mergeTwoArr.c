#include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2) {
    int merged[size1 + size2];
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    mergeArrays(arr1, 3, arr2, 3);
    return 0;
}
