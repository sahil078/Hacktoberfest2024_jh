/*
1 2 3
4 5 6
7 8 9
*/

#include<iostream>
using namespace std;

int main(){
    int rows;
    int count = 1;
    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(int i=1 ; i<=rows; i++){
        for(int j=1; j<=rows; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}