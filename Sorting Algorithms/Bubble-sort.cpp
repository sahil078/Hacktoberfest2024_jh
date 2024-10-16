// write a program to sort the array using bubble sort algorithm

#include<iostream>
using namespace std;

// function to perform Bubble sort Algorithm

void bubbleSort(int arr[], int n ){

    // traversing the whole array from 1 to n-1
    for(int i=0; i<n-1; i++){

        // traversing the array to swap the element
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

// function to print the array

void printArray(int arr[] , int n ){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// main function
int main(){
    int arr[] = {74,12,7,19,9,56,23};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr , 7);
    cout<<"The Sorted Array is: \n";
    printArray(arr , 7);

    return 0;
}
