//write a program to swap two number

#include<iostream>
using namespace std;

int main(){
    int x, y ,temp;

    cout<<"Enter the first number: "<<endl;
    cin>>x;

    cout<<"Enter the second number : "<<endl;
    cin>>y;

    temp = x;
    x = y;
    y = temp;

    cout<<"After swaping first number is : "<<x <<endl;
    cout<<"After swaping  second number is : "<< y<< endl;

    return 0;
}
