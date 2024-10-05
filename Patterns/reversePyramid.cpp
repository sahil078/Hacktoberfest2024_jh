#include<iostream>
using namespace std;
int main(){
    int n ; 
    cout<<"Enter the number of terms: ";
    cin>>n;

    for(int i=n; i>=1; i--){
        //for spacing
        for(int k=1; k<=n-i; k++){
            cout<<" ";
        }
        // for star
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
} 