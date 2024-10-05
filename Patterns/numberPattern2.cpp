/*
1 
2 3
3 4 5
4 5 6 7
*/ 

#include <iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    for(int i=1; i<=n; i++){
        int val = i;
        for(int j=1; j<=i; j++){
            cout<<val<<" ";
            val++;
        }
        cout<<endl;
    }
    return 0;

}