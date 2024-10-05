//find the sum of series

#include<iostream>
using namespace std;

int main(){
    int n , sum=0 , tsum;

    cout<<"Input the value of nth term to find the series: ";
    cin>>n;

    for(int i =1; i<=n; i++){
        tsum = 0;
        for(int j=1; j<=i; j++){
            sum += j ;
            tsum += j;
            cout<<j;
            if(j < i){
                cout<<"+";
            }
        }
        cout<<"="<<tsum<<endl;
    }
    cout<<" the sum of the series is :" << sum <<endl;
    return 0;
}
