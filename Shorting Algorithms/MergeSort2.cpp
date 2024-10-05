// there is two sorted array merge the array in single array

#include<iostream>
using namespace std;

// function to perform merge sort Algorithm
void mergeSort(int arr1[] , int n , int arr2[] , int m ){
    int i=0 , j=0 , k=0;

    while(i<n && j<m){

        // check arr[i] smaller thn arr[j]
        if(arr1[i] < arr2[j]){
            arr1[i] = arr1[i];
            i++;
        }
        else{
            arr1[i] = arr2[j];
            i++;
            j++;
        }
    }

    // if arr1[i] contain some element
    while(i<n){
        arr1[i] = arr1[i];
        i++;
    }

    // if arr2[j] contain some element
    while(j<m){
        arr1[i] = arr2[j];
        j++;
    }
}

// function to print the merged array
void printArr(int arr3[] , int n){
    for(int i=0; i<n; i++){
        cout<<arr3[i]<<" ";
    }
}

int main(){
    int arr1[] = {1,3,5 ,0 ,0 ,0};
    int arr2[] = {2,4,6};



    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    cout << "Array A: ";
    for(int i : arr1){
        cout << i << ' ';
    }

    cout<<endl;

    cout << "Array B: ";
    for(int i : arr2){
        cout << i << ' ';
    }

    mergeSort(arr1 , n , arr2 , m);
    cout<<"\nMerged Array is:\n";
    printArr(arr1 , n);
}