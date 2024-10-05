// write a program to sort the array using insertion sort Algorithm

#include<Iostream>
using namespace std;

// function to perform the insertion sort Algorithm

void InsertionSort(int arr[], int n){

    /*traversing the whole array from 1 to n 
    let's assume the the first element of array is already sorted*/

    for(int i=1; i<n; i++){
        // storing the value of arr[i] in key variable
        int key = arr[i];
        int j = i-1;
        while(j >= 0  && arr[j] > key){
            // shifting elements one position ahead of their current position
            arr[j+1] = arr[j];
            j--;
        }
        // inserting the key at its correct position
        arr[j+1] = key;
    }
}

// function to print the whole array

void printArray(int arr[] , int n){
    for (int i=0 ; i < n ; i++) {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {9,8,6,5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    // calling the insertionSort Function
    InsertionSort(arr , n);

    // printing the sorted array
    cout<<"The Sorted array is : \n";
    printArray(arr , n);

    return 0;
}