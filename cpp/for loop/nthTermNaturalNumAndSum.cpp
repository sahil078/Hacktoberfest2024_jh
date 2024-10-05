// write a program to display the nth terms of natural numbers and their sum .

#include<iostream>
using namespace std;

int main(){
    int n , sum=0;
    cout<<"Enter the nth term of number: ";
    cin>>n;

    cout<<"the numbers upto "<<n<<"th"<<" terms are: "<<endl;

    for(int i=1; i<=n; i++){
        cout<<i<<" ";
        sum = sum + i;
    }
    cout<<" \n the sum of "<<n<<"th "<<"term is : "<<sum<<endl;
    return 0;
}
