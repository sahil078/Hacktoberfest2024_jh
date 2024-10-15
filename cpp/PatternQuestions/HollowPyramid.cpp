#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;
    for(int row=n;row>=0;row--){
        int total = row+1;
        for(int col=0;col<total;col++){
            if(row==0 || row==1 || row==n-1){
                cout<<"*";
            }
            else{
                if(col == 0 || col == total-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
