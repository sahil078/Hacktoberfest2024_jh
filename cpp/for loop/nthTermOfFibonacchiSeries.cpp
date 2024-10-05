// write a progrsm to print the n terms of fibonacci series

#include<iostream>
using namespace std;

int main(){
    int n  , fibo , a = 0 , b=1 ;
    cout<<"Enter number of terms: "; 
    cin>>n;

    cout<<"the fibonacci series upto "<< n <<" terms: ";
    cout<< a <<" "<< b;
    for(int i=3; i<=n; i++){
        fibo = a + b;
        a = b;
        b = fibo;

    }
    cout << " "<<fibo;
}