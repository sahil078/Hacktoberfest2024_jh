/*
A 
B B
C C C
*/

#include<iostream>
// header file here was wrong as it started with capital i!!!
using namespace std;

int main(){
    int n ;
    cout<<"Enter the no. of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            char ch = 'A'+i-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}
