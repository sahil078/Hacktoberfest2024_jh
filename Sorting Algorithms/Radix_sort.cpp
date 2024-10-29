// C++ program to implement radix sort 
#include <bits/stdc++.h> 
using namespace std; 

 
void count_sort(int arr[], int n, int pos) 
{ 
 
	int count[10] = { 0 };  
	for (int i = 0; i < n; i++) { 
		count[(arr[i] / pos) % 10]++; 
	}  
	for (int i = 1; i < 10; i++) { 
		count[i] = count[i] + count[i - 1]; 
	}  
	int ans[n]; 
	for (int i = n - 1; i >= 0; i--) { 
		ans[--count[(arr[i] / pos) % 10]] = arr[i]; 
	}  
	for (int i = 0; i < n; i++) { 
		arr[i] = ans[i]; 
	} 
}   
void radix_sort(int arr[], int n) 
{  
	int k = *max_element(arr, arr + n); 

	for (int pos = 1; (k / pos) > 0; pos *= 10) { 
		count_sort(arr, n, pos); 
	} 
} 
 
int main() 
{ 
	int arr[] = { 6, 210, 300, 600, 1, 3 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	radix_sort(arr, n); 
 
	cout << "Array after performing radix sort : " << endl; 
	for (int i = 0; i < n; i++) { 
		cout << arr[i] << " "; 
	} 
	return 0; 
}
