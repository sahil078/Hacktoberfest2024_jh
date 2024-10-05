#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the no. of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++ ){
        // for space
        for(int k=1; k<=n-i; k++){
            cout<<" ";
        }
        //for star
        for(int j=1; j<=2*i-1; j++){
                cout<<"*";
        }
        cout<<endl;
    }

    // reverse pyramid
    for(int i=n-1; i>=1; i--){
        // for spacing
        for(int k=1; k<=n-i; k++){
            cout<<" ";
        }
        //        for stars
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}