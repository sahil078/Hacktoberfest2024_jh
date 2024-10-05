/*
A 
B C 
C D E
D E F G 
*/

#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter the no. of rows: ";
    cin>>n;

    for(int i=1; i<=n; i++ ){
        char ch = i;
        ch = ('A'+i-1);
        for(int j=1; j<=i; j++){
                cout<<ch<<" ";
                ch++;
        }
        cout<<endl;
    }
    return 0;
}