// write a program to convert Temprature in Kelvin to Fahrenheit

#include<iostream>
using namespace std;

int main(){
    double kel , feh ; 

    cout<<"Enter the Temprature in Kelvin : "<<endl;
    cin>>kel;

    feh = ((kel - 273.15)*9/5+32);

    cout<<"The tempratue in Fahrenheit is : "<< feh <<endl;

    return 0;
}