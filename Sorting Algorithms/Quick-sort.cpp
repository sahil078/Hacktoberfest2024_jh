#include <iostream>
using namespace std;

typedef int item_type; // Define item_type as int
int partition(item_type s[], int l, int h){
    int i, p;
    int firsthigh;
    p = h;
    firsthigh = l;
    for(i = l; i < h; i++){
        if(s[i] < s[p]){
            swap(s[i], s[firsthigh]);
            firsthigh++;
        }
    }
    swap(s[p], s[firsthigh]);
    return firsthigh;
}
void quicksort(item_type s[], int l, int h){
    int p; 
    if(l < h){
        p = partition(s, l, h);
        quicksort(s, l, p - 1);
        quicksort(s, p + 1, h);
    }
}

void printArray(item_type arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    item_type arr[] = {9, 8, 6, 5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    cout << "The sorted array is : \n";
    printArray(arr, n);
    return 0;
}