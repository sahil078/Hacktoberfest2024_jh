// write a program to calculate the volumn of sphare

#include<iostream>
using namespace std;

int main(){
    int rad1;
    double volsp;
    const double pi = 3.14;

    cout<<"Enter the radius of sphare : "<<endl;
    cin>>rad1;

    // formula for volume is (4/3) * pi*r^3

    volsp = (4*pi*rad1*rad1*rad1)/3;

    cout<<"The volumn of sphare is : "<<volsp<<endl;

    return 0;
}
