// write a program to print the sum of all integer between 100 and 200 which are divisible by 9.

#include<iostream>
using namespace std;

int main(){
    int sum  = 0;
    cout<<"the number divisible by 9 is :"<<endl;
    for(int i=100; i<=200; i++){
        if(i%9 == 0){
            cout<<" "<<i;
            sum += i;
        }
    }
    cout<<"\nthe sum of all integer divisible by 9 is "<<sum<<endl;
}