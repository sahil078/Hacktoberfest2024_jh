// write a program to print the sum of even numbers

#include<iostream>
using namespace std;

int main(){
    int n , sum=0 , even;
    cout<<"Enter number of terms: ";
    cin>> n;

    for(int i=1; i<=n; i++){
        even = 2*i;
        cout<<even<<" ";
        sum += even;
    }
    cout<<"\n the sum of even number upto: "<< n << " terms: "<< sum <<endl;
}