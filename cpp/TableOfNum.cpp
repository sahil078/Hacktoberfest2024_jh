// write a program to t0 print the Table of a number from 1 to 10

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any Number: ";
    cin>>num;

    for(int i=1 ; i<=10; i++){
        cout<< num <<" x " << i <<" = " << num*i <<endl;
    }

    return 0;
}