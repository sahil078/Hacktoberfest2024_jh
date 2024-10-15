#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i==0 || i== n-1 || j==0 || j == n-1 || i==j){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
            // Add space after each character except the last one
            // if (j < n - 1) {
            //     cout << " ";
            // }
        }
        cout << endl;
    }
    return 0;
}
