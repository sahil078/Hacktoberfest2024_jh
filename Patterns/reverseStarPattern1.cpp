/*
* * * *
* * *
* *
*
*/


#include<iostream>
using namespace std;


int main(){
    int n ;

    cout<<"Enter the no. of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++){
            char ch = n-i+1;
            ch = '*';
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}