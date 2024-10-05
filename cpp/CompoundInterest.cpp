// write a program to calculate compound interest by entering principle, time , rattee

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float p , t , r , ci, cp;

    cout<<"Enter the Principle (amount) : "<<endl;
    cin>>p;
    cout<<"Enter the time(in year) : "<<endl;
    cin>>t;
    cout<<"ENter the rate of interest : "<<endl;
    cin>>r;

    ci = p*pow((1+r/100) , t) - p;
    cp = p*pow((1+r/100) , t);

    cout<<"THe Interest after compounded of the amount " << p <<" for "<< t <<" year @ "<< r <<" % is" << ci <<endl; 

    cout<<"The total amount after compounded for the amount "<< p << " for "<< t <<" years @" << r <<" % is "<< cp <<endl;

    return 0;
}