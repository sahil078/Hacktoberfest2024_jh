// Write a program to convert temprature in Celcius to Fahrenheit

#include<iostream>
using namespace std;

int main(){
    double cel , feh ;

    cout<<"Enter the Temprature in Celcius : "<<endl;
    cin>>cel;

    feh = ((cel*9/5)+32);

    cout<<"the temprature in Fahrenheit is : "<< feh <<endl;

    return 0;
}