#include<iostream>
using namespace std;

// function to find arrange the element by selection sort
void selectionSort(int arr[] , int n ){
    // traversing the element of the array
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        //Again traversing the element to sort the array
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j; 
            }
        }
        // swapping the element
        swap(arr[minIndex], arr[i]);
    }
}

// Function to print the array

void printArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}

int main(){
    int arr[] = {5,67,34,78,90};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr , 5);
    cout << "The sorted array is : \n";
    printArray(arr , n);

    return 0;
}