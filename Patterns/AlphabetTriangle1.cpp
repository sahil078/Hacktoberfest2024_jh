/*
A 
B C
D E F 
*/

#include<iostream>
using namespace std;

int main(){
    int n ; 
    cout<<"Enter the no. of rows: ";
    cin>>n;
    char ch = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}