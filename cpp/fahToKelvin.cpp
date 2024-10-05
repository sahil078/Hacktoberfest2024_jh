// write a program to convert the temprature in fahrenheit to kelvin

#include<iostream>
using namespace std;

int main(){
    double feh , kel ;

    cout<<"Enter the temprature in fehreheit : "<<endl;
    cin>>feh;

    kel = ((feh - 32) * 5/9 + 273.15);

    cout<<"The tempratue in kelvin is : "<<kel <<endl;

    return 0;

}