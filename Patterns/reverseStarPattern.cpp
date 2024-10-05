/*
    *
  * *
* * *  
*/

#include<iostream>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the no. of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++){

        //for printing space
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }

        //for printing the star
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}