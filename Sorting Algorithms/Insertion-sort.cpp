#include <iostream>
using namespace std;

int main () {

    int size = 5;
    int* arr = new int[size]{5 , 2 , 4 , 1 , 3};

    cout << "Original Array: " << endl;
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 1 ; i < size ; i++){
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && temp < arr[j]){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    cout << "After sorting: " << endl;
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }

    return 0;
}