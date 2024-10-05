// write a program to calculate the Fahrenheit to celsius

#include<iostream>
using namespace std;

int main(){
    float fahr,celsius ;

    cout<<"Enter the temprature in Fahrenheit : "<<endl;
    cin>>fahr;

    celsius = (fahr - 32)*5/9;

    cout<<"The temprature in Celsius is : "<< celsius <<endl;

    return 0;
}

