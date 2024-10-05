// write a program to merge two sorted array

#include<iostream>
using namespace std;

// function to merge two Sorted array

void merge(int arr1[] , int n , int arr2[] , int m , int arr3[]){
    int i=0 , j=0 , k=0;

    while(i<n && j<m){

        // Checking the condition arr1[] is smaller than arr2[j] 
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    // after than copying the remaining item of arr1[] in arr3[]
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }

    // copying the remaining item of arr2[] in arr3[]
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}

// function to print the merged array
void printArray(int arr3[] , int size){
    for(int i=0 ; i<size ; i++){
        cout<<arr3[i] <<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[] = {2, 4, 6};
    int arr2[] = {2, 5, 7};

    int arr3[6]= {0};

    cout << "Original Array 1: ";
    for(auto i : arr1){
        cout << i << " ";
    }

    cout << endl;

    cout << "Original Array 2: ";
    for(auto i : arr2){
        cout << i << " ";
    }

    cout<<endl;

    merge(arr1 , 3 , arr2 , 3 , arr3 );

    cout<<"Printing the merged array (arr1 and arr2)"<<endl;

    printArray(arr3 , 6);

    return 0;
}