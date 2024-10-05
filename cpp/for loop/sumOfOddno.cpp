// write a program to print the sum of Odd numbers

#include<iostream>
using namespace std;

int main(){
    int n, sum=0 , odd;

    cout<<"Enter the no. of terms: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        odd = 2*i-1;
        cout<<odd<<" ";
        sum +=odd ;
    }
    cout<<"\nThe sum of Odd number is :"<< sum <<endl;
    
    return 0;
}