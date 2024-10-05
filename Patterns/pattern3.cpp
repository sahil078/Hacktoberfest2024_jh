/*
1 2 3 4
1 2 3 4
1 2 3 4
*/

#include<iostream>
using namespace std;

int main(){
    int n ;

    cout<<"Enter the number: ";
    cin>>n;

    for(int i =1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}