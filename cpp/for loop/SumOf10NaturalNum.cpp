// write a program to print the sum of 10 natural number

#include<Iostream>
using namespace std;

int main(){
    int i;
    int sum =0;
    cout<<"the natural numbers are: "<<endl;
    for(i=1; i<=10; i++){
        cout<<i<<endl;
        sum = sum+i;
    }
    cout<<"the sum of 10 natural number is : "<<sum<<endl;
    return 0;
}